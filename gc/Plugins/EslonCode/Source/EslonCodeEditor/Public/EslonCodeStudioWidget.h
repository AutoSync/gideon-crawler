#pragma once

#include "CoreMinimal.h"
#include "EslonCodeEditorLibrary.h"
#include "Widgets/SCompoundWidget.h"

class SMultiLineEditableTextBox;

class SEslonCodeStudio final : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SEslonCodeStudio) {}
	SLATE_END_ARGS()

	void Construct(const FArguments& InArgs);
	static FString GetDiagnosticsLinePrefix(EEslonCodeDiagnosticSeverity Severity);

private:
	FReply HandleBrowseSourceClicked();
	FReply HandleLoadClicked();
	FReply HandleSaveClicked();
	FReply HandleLoadExampleClicked();
	FReply HandleSyncClicked();
	FReply HandleRefreshManifestClicked();
	FReply HandleOpenFolderClicked();

	void LoadSourceFromDisk();
	bool SaveSourceToDisk();
	bool SyncCurrentSource();
	void RefreshManifest();
	void UpdateDiagnosticsText();
	void UpdateStatusText();
	void MarkSourceDirty();

	FText GetSourceText() const;
	FText GetManifestSummaryText() const;
	FText GetDiagnosticsText() const;
	FText GetStatusText() const;
	FText GetSourcePathText() const;
	FText GetBlueprintPathText() const;
	FText GetParentClassPathText() const;

	void OnSourceTextChanged(const FText& NewText);
	void OnSourcePathCommitted(const FText& NewText, ETextCommit::Type CommitType);
	void OnBlueprintPathCommitted(const FText& NewText, ETextCommit::Type CommitType);
	void OnParentClassPathCommitted(const FText& NewText, ETextCommit::Type CommitType);

	static FString GetDefaultSourcePath();
	static FString GetDefaultBlueprintPath();
	static FString GetDefaultParentClassPath();
	static FString JoinNames(const TArray<FString>& Names);

private:
	FString SourcePath;
	FString SourceText;
	FString BlueprintAssetPath;
	FString ParentClassPath;
	FString SchemaPath;

	bool bCreateBlueprintIfMissing = true;
	bool bReplaceGeneratedGraphs = true;
	bool bDeleteMissingGeneratedContent = true;
	bool bCompileAfterEmit = true;
	bool bSaveAfterEmit = true;
	bool bSourceDirty = false;

	FEslonCodeEmitReport LastReport;
	FEslonCodeWorkspaceManifest LastManifest;
	FText DiagnosticsText;
	FText StatusText;

	TSharedPtr<SMultiLineEditableTextBox> SourceEditor;
};
