# Inventory System

## Objetivo
Guardar itens do jogador, expor dados para UI, permitir uso contextual de itens e manter informações suficientes para savegame.

## Ativos relacionados
- `gc/Content/BIN_GC/BP/PLAYER/MASTER/BPC_Inventory.uasset`
- `gc/Content/BIN_GC/BP/GAMEPROPS/INTERACTABLES/STRUCT/SInventoryItem.uasset`
- `gc/Content/BIN_GC/BP/GAMEPROPS/INTERACTABLES/ENUMS/E_ItemTypeGC.uasset`
- `gc/Content/BIN_GC/BP/GAMEPROPS/INTERACTABLES/ENUMS/E_ItemTargetMode.uasset`
- `gc/Content/BIN_GC/BP/GAMEPROPS/INTERACTABLES/ENUMS/E_ItemUseResult.uasset`
- `gc/Content/BIN_GC/BP/PLAYER/UI/InventoryUI/WBP_ItemSlot.uasset`
- `gc/Content/BIN_GC/BP/PLAYER/UI/Menus/UI_InventoryMenu_GC.uasset`

## Regras
- O inventário pertence ao Player/Character via Actor Component.
- GameMode não deve conter regra de inventário.
- Widgets exibem dados e chamam funções públicas do componente.
- A UI não valida se uma porta aceita uma chave; isso pertence ao sistema de gameplay.
- `TryUseItem` deve consultar o contexto atual de interação antes de aplicar o efeito.

## Fluxo de item-chave
1. Player interage com o Actor coletável.
2. O item é adicionado ao inventário.
3. O Actor coletável é removido do mundo.
4. Player entra no contexto de um alvo, como uma porta trancada.
5. UI chama `TryUseItem`.
6. O componente consulta o alvo contextual.
7. O alvo valida tipo de item e identificador, como `KeyCode`.
8. Em sucesso, o alvo executa a ação e o item é consumido ou atualizado.
9. Em falha, o sistema retorna mensagem de erro apropriada.

## Critérios de aceite atuais
- Chave correta abre porta correta.
- Chave errada mostra erro.
- Chave fora de contexto mostra "Não é possível usar aqui."
- Inventário persiste dados suficientes para savegame.
