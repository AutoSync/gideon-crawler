#include "ContentBrowserExtensions/Eslon2DContentBrowserExtensions.h"

#include "AssetToolsModule.h"
#include "ContentBrowserModule.h"
#include "Framework/MultiBox/MultiBoxBuilder.h"
#include "IAssetTools.h"
#include "IContentBrowserSingleton.h"
#include "Misc/PackageName.h"
#include "PaperTileSet.h"
#include "Eslon2DTileMapAsset.h"
#include "Eslon2DTileMapFactory.h"

#define LOCTEXT_NAMESPACE "Eslon2DContentBrowserExtensions"

namespace
{
	static FContentBrowserMenuExtender_SelectedAssets ContentBrowserExtenderDelegate;
	static FDelegateHandle ContentBrowserExtenderDelegateHandle;

	struct FContentBrowserSelectedAssetExtensionBase
	{
		TArray<FAssetData> SelectedAssets;
		virtual ~FContentBrowserSelectedAssetExtensionBase() {}
		virtual void Execute() {}
	};

	struct FCreateTileMapFromTileSetExtension : FContentBrowserSelectedAssetExtensionBase
	{
		virtual void Execute() override
		{
			FAssetToolsModule& AssetToolsModule = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools");
			FContentBrowserModule& ContentBrowserModule = FModuleManager::LoadModuleChecked<FContentBrowserModule>("ContentBrowser");

			TArray<UObject*> ObjectsToSync;

			for (const FAssetData& AssetData : SelectedAssets)
			{
				UPaperTileSet* TileSet = Cast<UPaperTileSet>(AssetData.GetAsset());
				if (!TileSet)
				{
					continue;
				}

				UEslon2DTileMapFactory* Factory = NewObject<UEslon2DTileMapFactory>();
				Factory->InitialTileSet = TileSet;

				FString PackageName;
				FString AssetName;
				AssetToolsModule.Get().CreateUniqueAssetName(TileSet->GetOutermost()->GetName(), TEXT("_Tilemap"), PackageName, AssetName);
				const FString PackagePath = FPackageName::GetLongPackagePath(PackageName);

				if (UObject* NewAsset = AssetToolsModule.Get().CreateAsset(AssetName, PackagePath, UEslon2DTileMapAsset::StaticClass(), Factory))
				{
					ObjectsToSync.Add(NewAsset);
				}
			}

			if (ObjectsToSync.Num() > 0)
			{
				ContentBrowserModule.Get().SyncBrowserToAssets(ObjectsToSync);
			}
		}
	};

	static void ExecuteSelectedContentFunctor(TSharedPtr<FContentBrowserSelectedAssetExtensionBase> SelectedAssetFunctor)
	{
		SelectedAssetFunctor->Execute();
	}

	static bool CanCreateEslon2DTilemapAsset()
	{
		return true;
	}

	static TSharedRef<FExtender> OnExtendContentBrowserAssetSelectionMenu(const TArray<FAssetData>& SelectedAssets)
	{
		TSharedRef<FExtender> Extender(new FExtender());

		bool bAnyTileSets = false;
		for (const FAssetData& Asset : SelectedAssets)
		{
			bAnyTileSets = bAnyTileSets || (Asset.AssetClassPath == UPaperTileSet::StaticClass()->GetClassPathName());
		}

		if (bAnyTileSets && CanCreateEslon2DTilemapAsset())
		{
			Extender->AddMenuExtension(
				"GetAssetActions",
				EExtensionHook::After,
				nullptr,
				FMenuExtensionDelegate::CreateLambda([SelectedAssets](FMenuBuilder& MenuBuilder)
				{
					MenuBuilder.AddSubMenu(
						LOCTEXT("Eslon2DMenuLabel", "Eslon2D"),
						LOCTEXT("Eslon2DMenuTooltip", "Eslon2D tilemap tools."),
						FNewMenuDelegate::CreateLambda([SelectedAssets](FMenuBuilder& SubMenuBuilder)
						{
							TSharedPtr<FCreateTileMapFromTileSetExtension> Functor = MakeShareable(new FCreateTileMapFromTileSetExtension());
							Functor->SelectedAssets = SelectedAssets;

							FUIAction Action(
								FExecuteAction::CreateStatic(&ExecuteSelectedContentFunctor, StaticCastSharedPtr<FContentBrowserSelectedAssetExtensionBase>(Functor)));

							SubMenuBuilder.AddMenuEntry(
								LOCTEXT("Eslon2DTilemapLabel", "Tilemap"),
								LOCTEXT("Eslon2DTilemapTooltip", "Create an Eslon2D tilemap asset using the selected Paper2D tile set."),
								FSlateIcon(),
								Action,
								NAME_None,
								EUserInterfaceActionType::Button);
						}),
						false,
						FSlateIcon());
				}));
		}

		return Extender;
	}

	static TArray<FContentBrowserMenuExtender_SelectedAssets>& GetExtenderDelegates()
	{
		FContentBrowserModule& ContentBrowserModule = FModuleManager::LoadModuleChecked<FContentBrowserModule>(TEXT("ContentBrowser"));
		return ContentBrowserModule.GetAllAssetViewContextMenuExtenders();
	}
}

void FEslon2DContentBrowserExtensions::InstallHooks()
{
	ContentBrowserExtenderDelegate = FContentBrowserMenuExtender_SelectedAssets::CreateStatic(&OnExtendContentBrowserAssetSelectionMenu);
	TArray<FContentBrowserMenuExtender_SelectedAssets>& CBMenuExtenderDelegates = GetExtenderDelegates();
	CBMenuExtenderDelegates.Add(ContentBrowserExtenderDelegate);
	ContentBrowserExtenderDelegateHandle = CBMenuExtenderDelegates.Last().GetHandle();
}

void FEslon2DContentBrowserExtensions::RemoveHooks()
{
	TArray<FContentBrowserMenuExtender_SelectedAssets>& CBMenuExtenderDelegates = GetExtenderDelegates();
	CBMenuExtenderDelegates.RemoveAll([](const FContentBrowserMenuExtender_SelectedAssets& Delegate)
	{
		return Delegate.GetHandle() == ContentBrowserExtenderDelegateHandle;
	});
}

#undef LOCTEXT_NAMESPACE
