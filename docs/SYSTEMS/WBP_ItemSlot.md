# WBP_ItemSlot Widget

## Objetivo
Registrar o estado atual documentado do widget `WBP_ItemSlot`, extraido de `Inventory.md` sem reinterpretacao do fluxo.

## Ativo relacionado
- `gc/Content/BIN_GC/BP/PLAYER/UI/InventoryUI/WBP_ItemSlot.uasset`

## Fluxo extraido de Inventory.md

### WBP_ItemSlot : Widget

[Variables]
ItemData : DA_InventoryItem
ItemIndex : int32
OwnerInventoryWidget : WBP_Inventory
-[UIComponents]
    txt_remain_uses : TextBlock
    img_item_icon : Image
    button_item_slot : Button

[EventGraph]

OnClicked(button_item_slot) : [Event]
    → OwnerInventoryWidget.SelectItem(ItemIndex)
    → OwnerInventoryWidget.ShowContextMenu()
    → OwnerInventoryWidget.UpdateDetailsPanel(ItemData)