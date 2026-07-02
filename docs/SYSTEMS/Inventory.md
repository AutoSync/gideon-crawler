# Inventory System

## Objetivo
Guardar itens do jogador, expor dados para UI, permitir uso contextual de itens e manter informacoes suficientes para savegame.

## Ativos relacionados
- `gc/Content/BIN_GC/BP/PLAYER/MASTER/BPC_Inventory.uasset`
- `gc/Content/BIN_GC/BP/GAMEPROPS/INTERACTABLES/STRUCT/SInventoryItem.uasset`
- `gc/Content/BIN_GC/BP/GAMEPROPS/INTERACTABLES/DATAASSET/DA_InventoryItem.uasset`
- `gc/Content/BIN_GC/BP/GAMEPROPS/INTERACTABLES/ENUMS/E_ItemTypeGC.uasset`
- `gc/Content/BIN_GC/BP/GAMEPROPS/INTERACTABLES/ENUMS/E_ItemTargetMode.uasset`
- `gc/Content/BIN_GC/BP/GAMEPROPS/INTERACTABLES/ENUMS/E_ItemUseResult.uasset`
- `gc/Content/BIN_GC/BP/GAMEPROPS/INTERACTABLES/ENUMS/E_ItemRarity.uasset`
- `gc/Content/BIN_GC/BP/GAMEPROPS/INTERACTABLES/ENUMS/E_EquipSlot.uasset`
- `gc/Content/BIN_GC/BP/PLAYER/UI/InventoryUI/WBP_ItemSlot.uasset`
- `gc/Content/BIN_GC/BP/PLAYER/UI/Menus/WBP_Inventory.uasset`

## Regras
- O inventario pertence ao `BP_Player2D_GC` via Actor Component.
- GameMode nao deve conter regra de inventario.
- Widgets exibem dados e chamam funcoes publicas do componente.
- A UI nao valida se uma porta aceita uma chave; isso pertence ao sistema de gameplay.
- `TryUseItem` deve consultar o contexto atual de interacao antes de aplicar o efeito.

## Documentos complementares
- `Interaction.md`: orquestracao macro da interacao.
- `PLAYER.md`: ownership de input e contexto de uso.
- `KEY.md`: coleta de item no mundo.
- `DOOR.md`: alvo contextual que valida chave e retorna consumo.
- `BPC_Inventory.md`: detalhe atual do componente de inventario.
- `WBP_Inventory.md`: detalhe atual do widget principal do inventario.
- `WBP_ItemSlot.md`: detalhe atual do slot individual do inventario.

## Enums e Structs

- Definidos em `gc/Content/BIN_GC/BP/GAMEPROPS/INTERACTABLES/ENUMS` e `gc/Content/BIN_GC/BP/GAMEPROPS/INTERACTABLES/STRUCT`.
- Este documento concentra os tipos, structs e data assets usados pelo inventario.

### E_ItemTypeGC
- Classifica o tipo do item para UI, busca e validacao de contexto.
- Valores previstos no momento:
  - `Key`
  - `Health Potion`
  - `Mana Potion`
  - `Gemstone`
  - `Seal`
  - `Mail`
  - `Amulets`
  - `Collectable`
  - `AmuletHealth`
  - `AmuletDefense`
  - `AmuletManaReg`

### E_ItemTargetMode
- Enum usado para definir se um item opera sem alvo, no proprio personagem ou em um alvo contextual do mundo.

### E_ItemUseResult
- Enum retornado por `BPI_ItemUseTarget` para informar sucesso, falha ou outro estado relevante de uso.

### E_EquipSlot
- `Attack`
- `Defense`
- `ManaReg`

### E_ItemRarity
- `Common`
- `Rare`
- `Epic`
- `Legendary`

### SInventoryItem (legado)
- Struct antiga mantida apenas como referencia de transicao para o fluxo orientado por `DA_InventoryItem`.
- Campos:
  - `ItemType : E_ItemTypeGC`
  - `ItemCode : Name`
  - `Quantity : int32`
  - `ConsumeOnUse : bool`
  - `UseRemain : int32`
  - `InfiniteUses : bool`
  - `DisplayName : FText`
  - `CanDiscard : bool`
  - `DisplayIcon : UTexture2D*`
  - `Description : FText`

### DA_InventoryItem
- Data asset principal usado para representar um item no inventario, na UI e no uso contextual.
- Campos:
  - `ItemType : E_ItemTypeGC`
  - `ItemCode : Name`
  - `Quantity : int32`
  - `ConsumeOnUse : bool`
  - `UseRemain : int32`
  - `InfiniteUses : bool`
  - `DisplayName : FText`
  - `CanDiscard : bool`
  - `DisplayIcon : UTexture2D*`
  - `Description : FText`
  - `CanEquip : bool`
  - `EquipSlot : E_EquipSlot`
  - `ItemRarity : E_ItemRarity`
  - `Power : int32`
  - `Recharge : float`
  - `ManaCost : int32`
  - `Duration : float`

## Componentes documentados separadamente

- `BPC_InventoryComponent`: ver `BPC_Inventory.md`.
- `WBP_Inventory`: ver `WBP_Inventory.md`.
- `WBP_ItemSlot`: ver `WBP_ItemSlot.md`.

## Fluxo de item-chave
1. Player interage com o Actor coletavel.
2. O item e adicionado ao inventario.
3. O Actor coletavel e removido do mundo.
4. Player entra no contexto de um alvo, como uma porta trancada.
5. UI chama `TryUseItem`.
6. O componente consulta o alvo contextual.
7. O alvo valida tipo de item e identificador, como `KeyCode`.
8. Em sucesso, o alvo executa a acao e o item e consumido ou atualizado.
9. Em falha, o sistema retorna mensagem de erro apropriada.

## Criterios de aceite atuais
- Chave correta abre porta correta.
- Chave errada mostra erro.
- Chave fora de contexto mostra "Nao e possivel usar aqui."
- Inventario persiste dados suficientes para savegame.
