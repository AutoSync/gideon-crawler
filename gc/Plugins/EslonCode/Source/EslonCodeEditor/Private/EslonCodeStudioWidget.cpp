#include "EslonCodeStudioWidget.h"

#include "DesktopPlatformModule.h"
#include "Framework/Application/SlateApplication.h"
#include "Interfaces/IDesktopPlatform.h"
#include "Interfaces/IPluginManager.h"
#include "HAL/FileManager.h"
#include "HAL/PlatformProcess.h"
#include "Misc/FileHelper.h"
#include "Misc/Paths.h"
#include "Styling/AppStyle.h"
#include "Widgets/Images/SImage.h"
#include "Widgets/Input/SButton.h"
#include "Widgets/Input/SCheckBox.h"
#include "Widgets/Input/SEditableTextBox.h"
#include "Widgets/Input/SMultiLineEditableTextBox.h"
#include "Widgets/Layout/SBorder.h"
#include "Widgets/Layout/SSplitter.h"
#include "Widgets/Layout/SScrollBox.h"
#include "Widgets/Layout/SUniformGridPanel.h"
#include "Widgets/Text/STextBlock.h"

#define LOCTEXT_NAMESPACE "SEslonCodeStudio"

namespace
{
	static FString GetFallbackExampleSourcePath()
	{
		if (const TSharedPtr<IPlugin> Plugin = IPluginManager::Get().FindPlugin(TEXT("EslonCode")))
		{
			const FString ExamplePath = FPaths::Combine(Plugin->GetBaseDir(), TEXT("Examples"), TEXT("BPC_Inventory.eslon"));
			const FString LegacyExamplePath = FPaths::Combine(Plugin->GetBaseDir(), TEXT("Examples"), TEXT("BPC_Inventory.gscript"));
			if (FPaths::FileExists(ExamplePath))
			{
				return ExamplePath;
			}
			if (FPaths::FileExists(LegacyExamplePath))
			{
				return LegacyExamplePath;
			}
		}

		const FString WorkspaceDir = FPaths::Combine(FPaths::ProjectSavedDir(), TEXT("EslonCode"));
		IFileManager::Get().MakeDirectory(*WorkspaceDir, true);
		return FPaths::Combine(WorkspaceDir, TEXT("Untitled.eslon"));
	}

	static FString GetFallbackBlueprintAssetPath()
	{
		return TEXT("/Game/BIN_GC/BP/PLAYER/MASTER/BPC_Inventory");
	}

	static FString GetFallbackParentClassPath()
	{
		return TEXT("/Script/Engine.ActorComponent");
	}

	static FString BuildDiagnosticLine(const FEslonCodeDiagnostic& Diagnostic)
	{
		FString Line = FString::Printf(TEXT("[%s] %s"), *SEslonCodeStudio::GetDiagnosticsLinePrefix(Diagnostic.Severity), *Diagnostic.Message);
		if (!Diagnostic.FunctionName.IsEmpty())
		{
			Line += FString::Printf(TEXT(" (%s)"), *Diagnostic.FunctionName);
		}
		if (Diagnostic.Line > 0)
		{
			Line += FString::Printf(TEXT(" - line %d"), Diagnostic.Line);
		}
		return Line;
	}
}

void SEslonCodeStudio::Construct(const FArguments& InArgs)
{
	SourcePath = GetDefaultSourcePath();
	BlueprintAssetPath = GetDefaultBlueprintPath();
	ParentClassPath = GetDefaultParentClassPath();
	SchemaPath = UEslonCodeEditorLibrary::GetDefaultSchemaPath();

	LoadSourceFromDisk();
	RefreshManifest();
	UpdateDiagnosticsText();
	UpdateStatusText();

	ChildSlot
	[
		SNew(SBorder)
		.Padding(8.0f)
		[
			SNew(SVerticalBox)

			+ SVerticalBox::Slot()
			.AutoHeight()
			.Padding(0.0f, 0.0f, 0.0f, 8.0f)
			[
				SNew(SVerticalBox)

				+ SVerticalBox::Slot()
				.AutoHeight()
				.Padding(0.0f, 0.0f, 0.0f, 4.0f)
				[
					SNew(STextBlock)
					.Text(LOCTEXT("SourcePathLabel", "Source File"))
				]

				+ SVerticalBox::Slot()
				.AutoHeight()
				[
					SNew(SHorizontalBox)

					+ SHorizontalBox::Slot()
					.FillWidth(1.0f)
					.Padding(0.0f, 0.0f, 6.0f, 0.0f)
					[
						SNew(SEditableTextBox)
						.Text(this, &SEslonCodeStudio::GetSourcePathText)
						.OnTextCommitted(this, &SEslonCodeStudio::OnSourcePathCommitted)
						.HintText(LOCTEXT("SourcePathHint", "Path to a .eslon file"))
					]

					+ SHorizontalBox::Slot()
					.AutoWidth()
					.Padding(0.0f, 0.0f, 4.0f, 0.0f)
					[
						SNew(SButton)
						.ToolTipText(LOCTEXT("BrowseSourceTooltip", "Browse for a source file."))
						.OnClicked(this, &SEslonCodeStudio::HandleBrowseSourceClicked)
						[
							SNew(SHorizontalBox)
							+ SHorizontalBox::Slot()
							.AutoWidth()
							[
								SNew(SImage)
								.Image(FAppStyle::GetBrush(TEXT("Icons.FolderOpen")))
							]
							+ SHorizontalBox::Slot()
							.AutoWidth()
							.Padding(4.0f, 0.0f, 0.0f, 0.0f)
							[
								SNew(STextBlock)
								.Text(LOCTEXT("BrowseSourceButton", "Browse"))
							]
						]
					]

					+ SHorizontalBox::Slot()
					.AutoWidth()
					.Padding(0.0f, 0.0f, 4.0f, 0.0f)
					[
						SNew(SButton)
						.ToolTipText(LOCTEXT("LoadSourceTooltip", "Load the source file from disk."))
						.OnClicked(this, &SEslonCodeStudio::HandleLoadClicked)
						[
							SNew(SHorizontalBox)
							+ SHorizontalBox::Slot()
							.AutoWidth()
							[
								SNew(SImage)
								.Image(FAppStyle::GetBrush(TEXT("Icons.Import")))
							]
							+ SHorizontalBox::Slot()
							.AutoWidth()
							.Padding(4.0f, 0.0f, 0.0f, 0.0f)
							[
								SNew(STextBlock)
								.Text(LOCTEXT("LoadSourceButton", "Load"))
							]
						]
					]

					+ SHorizontalBox::Slot()
					.AutoWidth()
					[
						SNew(SButton)
						.ToolTipText(LOCTEXT("SaveSourceTooltip", "Save the current source text to disk."))
						.OnClicked(this, &SEslonCodeStudio::HandleSaveClicked)
						[
							SNew(SHorizontalBox)
							+ SHorizontalBox::Slot()
							.AutoWidth()
							[
								SNew(SImage)
								.Image(FAppStyle::GetBrush(TEXT("Icons.Save")))
							]
							+ SHorizontalBox::Slot()
							.AutoWidth()
							.Padding(4.0f, 0.0f, 0.0f, 0.0f)
							[
								SNew(STextBlock)
								.Text(LOCTEXT("SaveSourceButton", "Save"))
							]
						]
					]
				]

				+ SVerticalBox::Slot()
				.AutoHeight()
				.Padding(0.0f, 8.0f, 0.0f, 4.0f)
				[
					SNew(STextBlock)
					.Text(LOCTEXT("BlueprintPathLabel", "Target Blueprint"))
				]

				+ SVerticalBox::Slot()
				.AutoHeight()
				[
					SNew(SEditableTextBox)
					.Text(this, &SEslonCodeStudio::GetBlueprintPathText)
					.OnTextCommitted(this, &SEslonCodeStudio::OnBlueprintPathCommitted)
					.HintText(LOCTEXT("BlueprintPathHint", "/Game/.../BP_MyBlueprint"))
				]

				+ SVerticalBox::Slot()
				.AutoHeight()
				.Padding(0.0f, 8.0f, 0.0f, 4.0f)
				[
					SNew(STextBlock)
					.Text(LOCTEXT("ParentClassLabel", "Parent Class"))
				]

				+ SVerticalBox::Slot()
				.AutoHeight()
				[
					SNew(SEditableTextBox)
					.Text(this, &SEslonCodeStudio::GetParentClassPathText)
					.OnTextCommitted(this, &SEslonCodeStudio::OnParentClassPathCommitted)
					.HintText(LOCTEXT("ParentClassHint", "/Script/Engine.ActorComponent"))
				]
			]

			+ SVerticalBox::Slot()
			.AutoHeight()
			.Padding(0.0f, 0.0f, 0.0f, 8.0f)
			[
				SNew(SUniformGridPanel)
				.SlotPadding(FMargin(0.0f, 0.0f, 8.0f, 6.0f))

				+ SUniformGridPanel::Slot(0, 0)
				[
					SNew(SCheckBox)
					.IsChecked_Lambda([this]() { return bCreateBlueprintIfMissing ? ECheckBoxState::Checked : ECheckBoxState::Unchecked; })
					.OnCheckStateChanged_Lambda([this](ECheckBoxState NewState) { bCreateBlueprintIfMissing = (NewState == ECheckBoxState::Checked); UpdateStatusText(); })
					[
						SNew(STextBlock).Text(LOCTEXT("CreateMissingLabel", "Create missing Blueprint"))
					]
				]

				+ SUniformGridPanel::Slot(1, 0)
				[
					SNew(SCheckBox)
					.IsChecked_Lambda([this]() { return bReplaceGeneratedGraphs ? ECheckBoxState::Checked : ECheckBoxState::Unchecked; })
					.OnCheckStateChanged_Lambda([this](ECheckBoxState NewState) { bReplaceGeneratedGraphs = (NewState == ECheckBoxState::Checked); UpdateStatusText(); })
					[
						SNew(STextBlock).Text(LOCTEXT("ReplaceGraphsLabel", "Replace generated graphs"))
					]
				]

				+ SUniformGridPanel::Slot(2, 0)
				[
					SNew(SCheckBox)
					.IsChecked_Lambda([this]() { return bDeleteMissingGeneratedContent ? ECheckBoxState::Checked : ECheckBoxState::Unchecked; })
					.OnCheckStateChanged_Lambda([this](ECheckBoxState NewState) { bDeleteMissingGeneratedContent = (NewState == ECheckBoxState::Checked); UpdateStatusText(); })
					[
						SNew(STextBlock).Text(LOCTEXT("DeleteMissingLabel", "Delete missing generated content"))
					]
				]

				+ SUniformGridPanel::Slot(0, 1)
				[
					SNew(SCheckBox)
					.IsChecked_Lambda([this]() { return bCompileAfterEmit ? ECheckBoxState::Checked : ECheckBoxState::Unchecked; })
					.OnCheckStateChanged_Lambda([this](ECheckBoxState NewState) { bCompileAfterEmit = (NewState == ECheckBoxState::Checked); UpdateStatusText(); })
					[
						SNew(STextBlock).Text(LOCTEXT("CompileAfterEmitLabel", "Compile after emit"))
					]
				]

				+ SUniformGridPanel::Slot(1, 1)
				[
					SNew(SCheckBox)
					.IsChecked_Lambda([this]() { return bSaveAfterEmit ? ECheckBoxState::Checked : ECheckBoxState::Unchecked; })
					.OnCheckStateChanged_Lambda([this](ECheckBoxState NewState) { bSaveAfterEmit = (NewState == ECheckBoxState::Checked); UpdateStatusText(); })
					[
						SNew(STextBlock).Text(LOCTEXT("SaveAfterEmitLabel", "Save package after emit"))
					]
				]
			]

			+ SVerticalBox::Slot()
			.AutoHeight()
			.Padding(0.0f, 0.0f, 0.0f, 8.0f)
			[
				SNew(SHorizontalBox)

				+ SHorizontalBox::Slot()
				.AutoWidth()
				.Padding(0.0f, 0.0f, 4.0f, 0.0f)
				[
					SNew(SButton)
					.ToolTipText(LOCTEXT("LoadExampleTooltip", "Load the bundled inventory example into the editor."))
					.OnClicked(this, &SEslonCodeStudio::HandleLoadExampleClicked)
					[
						SNew(SHorizontalBox)
						+ SHorizontalBox::Slot()
						.AutoWidth()
						[
							SNew(SImage)
							.Image(FAppStyle::GetBrush(TEXT("Icons.Diff")))
						]
						+ SHorizontalBox::Slot()
						.AutoWidth()
						.Padding(4.0f, 0.0f, 0.0f, 0.0f)
						[
							SNew(STextBlock)
							.Text(LOCTEXT("LoadExampleButton", "Load Example"))
						]
					]
				]

				+ SHorizontalBox::Slot()
				.AutoWidth()
				.Padding(0.0f, 0.0f, 4.0f, 0.0f)
				[
					SNew(SButton)
					.ToolTipText(LOCTEXT("RefreshManifestTooltip", "Reload the manifest stored beside the source file."))
					.OnClicked(this, &SEslonCodeStudio::HandleRefreshManifestClicked)
					[
						SNew(SHorizontalBox)
						+ SHorizontalBox::Slot()
						.AutoWidth()
						[
							SNew(SImage)
							.Image(FAppStyle::GetBrush(TEXT("Icons.Refresh")))
						]
						+ SHorizontalBox::Slot()
						.AutoWidth()
						.Padding(4.0f, 0.0f, 0.0f, 0.0f)
						[
							SNew(STextBlock)
							.Text(LOCTEXT("RefreshManifestButton", "Refresh Manifest"))
						]
					]
				]

				+ SHorizontalBox::Slot()
				.AutoWidth()
				.Padding(0.0f, 0.0f, 4.0f, 0.0f)
				[
					SNew(SButton)
					.ToolTipText(LOCTEXT("OpenFolderTooltip", "Open the source file directory."))
					.OnClicked(this, &SEslonCodeStudio::HandleOpenFolderClicked)
					[
						SNew(SHorizontalBox)
						+ SHorizontalBox::Slot()
						.AutoWidth()
						[
							SNew(SImage)
							.Image(FAppStyle::GetBrush(TEXT("Icons.FolderOpen")))
						]
						+ SHorizontalBox::Slot()
						.AutoWidth()
						.Padding(4.0f, 0.0f, 0.0f, 0.0f)
						[
							SNew(STextBlock)
							.Text(LOCTEXT("OpenFolderButton", "Open Folder"))
						]
					]
				]

				+ SHorizontalBox::Slot()
				.FillWidth(1.0f)
				[
					SNew(STextBlock)
					.Text(this, &SEslonCodeStudio::GetStatusText)
					.AutoWrapText(true)
				]

				+ SHorizontalBox::Slot()
				.AutoWidth()
				[
					SNew(SButton)
					.ToolTipText(LOCTEXT("SyncTooltip", "Compile the source and sync the target Blueprint."))
					.OnClicked(this, &SEslonCodeStudio::HandleSyncClicked)
					[
						SNew(SHorizontalBox)
						+ SHorizontalBox::Slot()
						.AutoWidth()
						[
							SNew(SImage)
							.Image(FAppStyle::GetBrush(TEXT("Icons.Play")))
						]
						+ SHorizontalBox::Slot()
						.AutoWidth()
						.Padding(4.0f, 0.0f, 0.0f, 0.0f)
						[
							SNew(STextBlock)
							.Text(LOCTEXT("SyncButton", "Sync Blueprint"))
						]
					]
				]
			]

			+ SVerticalBox::Slot()
			.FillHeight(1.0f)
			[
				SNew(SSplitter)

				+ SSplitter::Slot()
				.Value(0.68f)
				[
					SNew(SBorder)
					.Padding(4.0f)
					[
						SAssignNew(SourceEditor, SMultiLineEditableTextBox)
						.Text(this, &SEslonCodeStudio::GetSourceText)
						.OnTextChanged(this, &SEslonCodeStudio::OnSourceTextChanged)
						.SelectAllTextWhenFocused(false)
						.AllowContextMenu(true)
						.AutoWrapText(false)
					]
				]

				+ SSplitter::Slot()
				.Value(0.32f)
				[
					SNew(SVerticalBox)

					+ SVerticalBox::Slot()
					.AutoHeight()
					.Padding(0.0f, 0.0f, 0.0f, 4.0f)
					[
						SNew(STextBlock)
						.Text(LOCTEXT("ManifestHeader", "Manifest Summary"))
					]

					+ SVerticalBox::Slot()
					.AutoHeight()
					.Padding(0.0f, 0.0f, 0.0f, 8.0f)
					[
						SNew(SBorder)
						.Padding(6.0f)
						[
							SNew(STextBlock)
							.Text(this, &SEslonCodeStudio::GetManifestSummaryText)
							.AutoWrapText(true)
						]
					]

					+ SVerticalBox::Slot()
					.AutoHeight()
					.Padding(0.0f, 0.0f, 0.0f, 4.0f)
					[
						SNew(STextBlock)
						.Text(LOCTEXT("DiagnosticsHeader", "Diagnostics"))
					]

					+ SVerticalBox::Slot()
					.FillHeight(1.0f)
					[
						SNew(SBorder)
						.Padding(4.0f)
						[
							SNew(SScrollBox)
							+ SScrollBox::Slot()
							[
								SNew(STextBlock)
								.Text(this, &SEslonCodeStudio::GetDiagnosticsText)
								.AutoWrapText(true)
							]
						]
					]
				]
			]
		]
	];
}

FReply SEslonCodeStudio::HandleBrowseSourceClicked()
{
	if (bSourceDirty)
	{
		SaveSourceToDisk();
	}

	IDesktopPlatform* DesktopPlatform = FDesktopPlatformModule::Get();
	if (!DesktopPlatform)
	{
		return FReply::Handled();
	}

	const void* ParentWindowHandle = FSlateApplication::Get().FindBestParentWindowHandleForDialogs(nullptr);
	TArray<FString> SelectedFiles;
	const FString DefaultPath = FPaths::GetPath(SourcePath);
		DesktopPlatform->OpenFileDialog(
		ParentWindowHandle,
		TEXT("Open EslonCode Source"),
		DefaultPath,
		TEXT(""),
		TEXT("EslonCode Source (*.eslon)|*.eslon|Legacy Source (*.gscript)|*.gscript|All Files (*.*)|*.*"),
		0,
		SelectedFiles);

	if (SelectedFiles.Num() > 0)
	{
		SourcePath = SelectedFiles[0];
		LoadSourceFromDisk();
	}

	UpdateStatusText();
	return FReply::Handled();
}

FReply SEslonCodeStudio::HandleLoadClicked()
{
	LoadSourceFromDisk();
	RefreshManifest();
	UpdateDiagnosticsText();
	UpdateStatusText();
	return FReply::Handled();
}

FReply SEslonCodeStudio::HandleSaveClicked()
{
	SaveSourceToDisk();
	RefreshManifest();
	UpdateStatusText();
	return FReply::Handled();
}

FReply SEslonCodeStudio::HandleLoadExampleClicked()
{
	if (bSourceDirty)
	{
		SaveSourceToDisk();
	}

	SourcePath = GetDefaultSourcePath();
	LoadSourceFromDisk();
	RefreshManifest();
	UpdateDiagnosticsText();
	UpdateStatusText();
	return FReply::Handled();
}

FReply SEslonCodeStudio::HandleSyncClicked()
{
	SyncCurrentSource();
	return FReply::Handled();
}

FReply SEslonCodeStudio::HandleRefreshManifestClicked()
{
	RefreshManifest();
	UpdateStatusText();
	return FReply::Handled();
}

FReply SEslonCodeStudio::HandleOpenFolderClicked()
{
	const FString FolderPath = FPaths::GetPath(SourcePath);
	if (!FolderPath.IsEmpty())
	{
		FPlatformProcess::ExploreFolder(*FolderPath);
	}

	return FReply::Handled();
}

void SEslonCodeStudio::LoadSourceFromDisk()
{
	if (SourcePath.IsEmpty())
	{
		SourcePath = GetDefaultSourcePath();
	}

	if (!FFileHelper::LoadFileToString(SourceText, *SourcePath))
	{
		if (FPaths::FileExists(SourcePath))
		{
			SourceText.Reset();
		}
		else if (SourcePath == GetDefaultSourcePath())
		{
			SourceText = TEXT("var InventoryItems: TArray<DA_InventoryItem>\nvar MaxSlotItems: int32\n\n");
			SourceText += TEXT("def AddItem(ItemData: DA_InventoryItem) -> (Success: bool):\n");
			SourceText += TEXT("    if InventoryItems.Length == MaxSlotItems:\n");
			SourceText += TEXT("        return False\n");
			SourceText += TEXT("    else:\n");
			SourceText += TEXT("        InventoryItems.Add(ItemData)\n");
			SourceText += TEXT("        return True\n");
		}
	}

	bSourceDirty = false;
	if (SourceEditor.IsValid())
	{
		SourceEditor->SetText(FText::FromString(SourceText));
	}

	UpdateStatusText();
}

bool SEslonCodeStudio::SaveSourceToDisk()
{
	if (SourcePath.IsEmpty())
	{
		SourcePath = GetDefaultSourcePath();
	}

	const FString Directory = FPaths::GetPath(SourcePath);
	if (!Directory.IsEmpty())
	{
		IFileManager::Get().MakeDirectory(*Directory, true);
	}

	const FString TextToSave = SourceText.EndsWith(TEXT("\n")) ? SourceText : SourceText + TEXT("\n");
	const bool bSaved = FFileHelper::SaveStringToFile(TextToSave, *SourcePath);
	bSourceDirty = !bSaved;
	UpdateStatusText();
	return bSaved;
}

bool SEslonCodeStudio::SyncCurrentSource()
{
	if (!SaveSourceToDisk())
	{
		UpdateDiagnosticsText();
		return false;
	}

	const bool bResult = UEslonCodeEditorLibrary::SyncBlueprintFromSourceFile(
		SourcePath,
		SchemaPath,
		BlueprintAssetPath,
		ParentClassPath,
		bCreateBlueprintIfMissing,
		bReplaceGeneratedGraphs,
		bDeleteMissingGeneratedContent,
		bCompileAfterEmit,
		bSaveAfterEmit,
		LastManifest,
		LastReport);

	RefreshManifest();
	UpdateDiagnosticsText();
	UpdateStatusText();
	return bResult;
}

void SEslonCodeStudio::RefreshManifest()
{
	FEslonCodeWorkspaceManifest LoadedManifest;
	if (UEslonCodeEditorLibrary::LoadWorkspaceManifestFromSourcePath(SourcePath, LoadedManifest))
	{
		LastManifest = LoadedManifest;
		if (LoadedManifest.Assets.Num() > 0)
		{
			const FEslonCodeGeneratedAssetRecord& FirstRecord = LoadedManifest.Assets[0];
			if (!FirstRecord.AssetPath.IsEmpty())
			{
				BlueprintAssetPath = FirstRecord.AssetPath;
			}
			if (!FirstRecord.ParentClassPath.IsEmpty())
			{
				ParentClassPath = FirstRecord.ParentClassPath;
			}
		}
	}
	else
	{
		LastManifest = FEslonCodeWorkspaceManifest();
	}

	UpdateStatusText();
}

void SEslonCodeStudio::UpdateDiagnosticsText()
{
	if (LastReport.Diagnostics.IsEmpty())
	{
		DiagnosticsText = FText::FromString(TEXT("No diagnostics."));
		return;
	}

	FString Combined;
	for (const FEslonCodeDiagnostic& Diagnostic : LastReport.Diagnostics)
	{
		Combined += BuildDiagnosticLine(Diagnostic);
		Combined += TEXT("\n");
	}
	DiagnosticsText = FText::FromString(Combined);
}

void SEslonCodeStudio::UpdateStatusText()
{
	FString Summary = FString::Printf(
		TEXT("Source: %s\nBlueprint: %s\nParent Class: %s\nSchema: %s\nOptions: create=%s replace=%s delete=%s compile=%s save=%s\nDirty: %s"),
		*SourcePath,
		*BlueprintAssetPath,
		*ParentClassPath,
		*SchemaPath,
		bCreateBlueprintIfMissing ? TEXT("yes") : TEXT("no"),
		bReplaceGeneratedGraphs ? TEXT("yes") : TEXT("no"),
		bDeleteMissingGeneratedContent ? TEXT("yes") : TEXT("no"),
		bCompileAfterEmit ? TEXT("yes") : TEXT("no"),
		bSaveAfterEmit ? TEXT("yes") : TEXT("no"),
		bSourceDirty ? TEXT("yes") : TEXT("no"));

	if (LastReport.bSuccess || LastReport.Diagnostics.Num() > 0)
	{
		Summary += FString::Printf(
			TEXT("\nLast sync: created %d, updated %d, deleted %d."),
			LastReport.CreatedGraphs.Num(),
			LastReport.UpdatedGraphs.Num(),
			LastReport.DeletedGraphs.Num() + LastReport.DeletedMemberVariables.Num());
	}

	StatusText = FText::FromString(Summary);
}

FText SEslonCodeStudio::GetSourceText() const
{
	return FText::FromString(SourceText);
}

FText SEslonCodeStudio::GetManifestSummaryText() const
{
	if (LastManifest.SourcePath.IsEmpty() || LastManifest.Assets.IsEmpty())
	{
		return FText::FromString(TEXT("No manifest loaded yet."));
	}

	const FEslonCodeGeneratedAssetRecord& Record = LastManifest.Assets[0];
	FString Summary;
	Summary += FString::Printf(TEXT("Source: %s\n"), *LastManifest.SourcePath);
	Summary += FString::Printf(TEXT("Hash: %s\n"), *LastManifest.SourceHash);
	Summary += FString::Printf(TEXT("Asset kind: %s\n"), Record.Kind == EEslonCodeGeneratedAssetKind::Blueprint ? TEXT("Blueprint") : TEXT("Other"));
	Summary += FString::Printf(TEXT("Asset path: %s\n"), *Record.AssetPath);
	Summary += FString::Printf(TEXT("Parent class: %s\n"), *Record.ParentClassPath);
	Summary += FString::Printf(TEXT("Graphs (%d): %s\n"), Record.GeneratedGraphs.Num(), *JoinNames(Record.GeneratedGraphs));
	Summary += FString::Printf(TEXT("Variables (%d): %s"), Record.GeneratedMemberVariables.Num(), *JoinNames(Record.GeneratedMemberVariables));
	return FText::FromString(Summary);
}

FText SEslonCodeStudio::GetDiagnosticsText() const
{
	return DiagnosticsText;
}

FText SEslonCodeStudio::GetStatusText() const
{
	return StatusText;
}

FText SEslonCodeStudio::GetSourcePathText() const
{
	return FText::FromString(SourcePath);
}

FText SEslonCodeStudio::GetBlueprintPathText() const
{
	return FText::FromString(BlueprintAssetPath);
}

FText SEslonCodeStudio::GetParentClassPathText() const
{
	return FText::FromString(ParentClassPath);
}

void SEslonCodeStudio::OnSourceTextChanged(const FText& NewText)
{
	SourceText = NewText.ToString();
	MarkSourceDirty();
}

void SEslonCodeStudio::OnSourcePathCommitted(const FText& NewText, ETextCommit::Type CommitType)
{
	SourcePath = NewText.ToString();
	UpdateStatusText();
}

void SEslonCodeStudio::OnBlueprintPathCommitted(const FText& NewText, ETextCommit::Type CommitType)
{
	BlueprintAssetPath = NewText.ToString();
	UpdateStatusText();
}

void SEslonCodeStudio::OnParentClassPathCommitted(const FText& NewText, ETextCommit::Type CommitType)
{
	ParentClassPath = NewText.ToString();
	UpdateStatusText();
}

FString SEslonCodeStudio::GetDefaultSourcePath()
{
	return GetFallbackExampleSourcePath();
}

FString SEslonCodeStudio::GetDefaultBlueprintPath()
{
	return GetFallbackBlueprintAssetPath();
}

FString SEslonCodeStudio::GetDefaultParentClassPath()
{
	return GetFallbackParentClassPath();
}

FString SEslonCodeStudio::JoinNames(const TArray<FString>& Names)
{
	if (Names.IsEmpty())
	{
		return TEXT("(none)");
	}

	return FString::Join(Names, TEXT(", "));
}

FString SEslonCodeStudio::GetDiagnosticsLinePrefix(EEslonCodeDiagnosticSeverity Severity)
{
	switch (Severity)
	{
	case EEslonCodeDiagnosticSeverity::Warning:
		return TEXT("Warn");
	case EEslonCodeDiagnosticSeverity::Error:
		return TEXT("Error");
	case EEslonCodeDiagnosticSeverity::Info:
	default:
		return TEXT("Info");
	}
}

void SEslonCodeStudio::MarkSourceDirty()
{
	bSourceDirty = true;
	UpdateStatusText();
}

#undef LOCTEXT_NAMESPACE
