# WBP_Inventory Widget

## Objetivo
Registrar o estado atual documentado do widget `WBP_Inventory`, extraido de `Inventory.md` sem reinterpretacao do fluxo.

## Ativo relacionado
- `gc/Content/BIN_GC/BP/PLAYER/UI/Menus/WBP_Inventory.uasset`

## Fluxo extraido de Inventory.md

### WBP_Inventory : Widget

[Functions]
InitInventory
RefreshInventory
ShowContextMenu
HideContextMenu
UpdateDetailsPanel
ClearDetailsPanel
SelectItem
OnUseSelectedItem

[Variables]
-[Components]
    InventoryComponent
OwningPlayer : BP_Player2D
InUseContextTarget : AActor
SelectedItemIndex : int32
CloseSuccessfulUse : bool
SelectItemData : DA_InventoryItem
-[UIComponents]
    WRP_InventoryContainer : WrapBox
    txt_item_details_name : TextBlock
    txt_item_details_type : TextBlock
    txt_item_details_remains : TextBlock
    txt_item_details_quantity : TextBlock
    ContainerContextMenu : VerticalBox
    button_use_item : Button
    button_drop_item : Button
    button_equip_item : Button
    button_inspect_item : Button
    button_inventory_close : Button

InitInventory(OwningPlayer, InventoryComponent, InUseContextTarget, CloseSuccessfulUse) : [function]
    → Set OwningPlayer = OwningPlayer
    → Set InventoryComponent = InventoryComponent
    → Set InUseContextTarget = InUseContextTarget
    → Set CloseSuccessfulUse = CloseSuccessfulUse
    → Call RefreshInventory()
    → Call ClearDetailsPanel()
    → Call HideContextMenu()

RefreshInventory() : [function]
    → WRP_InventoryContainer.ClearChildren()
    → IsValid (InventoryComponent) ?
        False:
            → Return
        True:
            → InventoryComponent.InventoryItems.ForEachLoop(ItemData)
                → Create WBP_ItemSlot
                → Set SetupSlot(Self, ItemData, ItemIndex)
                → Add WBP_ItemSlot to WRP_InventoryContainer
            → Completed
                HideContextMenu()
                ClearDetailsPanel()

ShowContextMenu() : [function]
    → Set ContainerContextMenu Visibility = Visible

HideContextMenu() : [function]
    → Set ContainerContextMenu Visibility = Hidden

UpdateDetailsPanel(ItemData) : [function] (ST_UI = StringTable)
    → Set txt_item_details_name.Text = Format("{0}:({1})", ST_UI.ui.inventory.details.name, ItemData.ItemName)
    type = selected item type
    → Set txt_item_details_type.Text = Format("{0}:({1})", ST_UI.ui.inventory.details.type, type)
    → Set txt_item_details_remains.Text = Format("{0}:({1})", ST_UI.ui.inventory.details.remains, ItemData.Remains)
    → Set txt_item_details_quantity.Text = Format("{0}:({1})", ST_UI.ui.inventory.details.quantity, ItemData.Quantity)

ClearDetailsPanel() : [function]
    → Set txt_item_details_name.Text = Format("{0}:({1})", ST_UI.ui.inventory.details.name, "")
    → Set txt_item_details_type.Text = Format("{0}:({1})", ST_UI.ui.inventory.details.type, "")
    → Set txt_item_details_remains.Text = Format("{0}:({1})", ST_UI.ui.inventory.details.remains, "")
    → Set txt_item_details_quantity.Text = Format("{0}:({1})", ST_UI.ui.inventory.details.quantity, "")

SelectItem(ItemIndex, ItemData) : [function]
    → Set SelectedItemIndex = ItemIndex
    → Set SelectItemData = ItemData
    → Call UpdateDetailsPanel(ItemData)
    → Call ShowContextMenu()

OnUseSelectedItem() : [function]
    → SelectedIndex >0 ?
        True:
            IsValid(InventoryComponent)?
                True:
                    InventoryComponent.TryUseItemAtIndex(SelectedItemIndex) return (Success)
                        True:
                            → PrintText(Message) // Substituir por feedback visual
                            → Call RefreshInventory()
                            CloseSuccessfulUse == True ?
                                True:
                                    → OwningPlayer.Evt_CloseInventory()
                        False:
                            → Call RefreshInventory()
        False:
            → PrintText("Nenhum Item Selecionado") // Remover posteriormente

[EventGraph]

EventPreConstruct() : [Event]
    → Call RefreshInventory()

OnClicked(button_inventory_close) : [Event]
    → OwningPlayer.Evt_CloseInventory()

OnClicked(button_use_item) : [Event]
    → Call OnUseSelectedItem()