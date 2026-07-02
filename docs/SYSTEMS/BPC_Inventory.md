# BPC_Inventory Component

## Objetivo
Registrar o estado atual documentado do componente `BPC_Inventory`, extraido de `Inventory.md` sem reinterpretacao do fluxo.

## Ativo relacionado
- `gc/Content/BIN_GC/BP/PLAYER/MASTER/BPC_Inventory.uasset`

## Fluxo extraido de Inventory.md

### BPC_InventoryComponent : Actor Component

```python

InventoryItems = TArray<DA_InventoryItem> # Array de itens no inventario, cada item e um Data Asset que contem informacoes detalhadas sobre o item.
MaxSlotItems = int32 # Numero maximo de slots de itens no inventario, limitando quantos itens o jogador pode carregar.

def AddItem (ItemData):
    if InventoryItems.Length == MaxSlotItems:
        Return = False
    else:
        InventoryItems.Add(ItemData)
        Return = True


def HasItem (RequiredItemType, RequiredItemCode)
    for ItemData in InventoryItems:
        if ItemData.ItemType == RequiredItemType AND ItemData.ItemCode == RequiredItemCode
            Return True, ItemData.Index
    Return False, -1

def ConsumeItemByIndex (ItemIndex):
    if InventoryItems.IsValidIndex(ItemIndex):
        True:
            → InventoryItems.Quantity > 0 ?
                True:
                    → InventoryItems[ItemIndex].Quantity -= 1
                    → Return Success = True
                False:
                    InventoryItems[ItemIndex].Quantity == 0 ?
                        True:
                            → InventoryItems.RemoveIndex(ItemIndex)
                            → Return Success = True
    else:
        Return = False

TryUseItem (RequiredItemType, RequiredItemCode) return (Success)
    HasItem(RequiredItemType, RequiredItemCode) Found?
        False:
            → Return Success = False
        True:
            ConsumeItemByIndex(FoundItemIndex)
                return: Success

TryUseItemAtIndex (ItemIndex) return (Success)
    InventoryItems.IsValidIndex(ItemIndex)
        False:
            → Return Success = False
        True:
            ConsumeItemByIndex(ItemIndex)
                return: Success

```

Observacao sobre o contexto atual de uso
    → A documentacao-base do projeto define que `TryUseItem` deve consultar o contexto atual de interacao antes de aplicar o efeito.
    → A comunicacao entre inventario, alvo contextual e feedback esta descrita em `Interaction.md` e `Doors.md`, sem alterar aqui a assinatura atualmente documentada do componente.