# Door System

## Objetivo
Controlar portas comuns, portas trancadas e portas ativadas por puzzles ou itens especiais.

## Ativos relacionados
- `gc/Content/BIN_GC/BP/GAMEPROPS/DOORS/BP_Doors_GameProps.uasset`
- `gc/Content/BIN_GC/BP/GAMEPROPS/DOORS/BP_DOOR_GameProps.uasset`
- `gc/Content/BIN_GC/BP/GAMEPROPS/DOORS/BP_JAIL_GameProps.uasset`
- `gc/Content/BIN_GC/BP/GAMEPROPS/INTERACTABLES/STRUCT/SDoorState.uasset`
- `gc/Content/BIN_GC/TEXTURES/ICONS/TOOLS/door_icon.uasset`

## Tipos previstos
- Porta comum: abre por interação.
- Porta trancada: exige chave compatível.
- Porta mecânica: abre por puzzle.
- Porta mágica: exige item especial, como selo ou gemstone.

## Regras
- Porta deve expor interação por `BPI_Interactable_GC`.
- Porta que aceita item deve expor alvo por `BPI_ItemUseTarget`.
- Porta trancada valida tipo do item e identificador, como `KeyCode`.
- Porta não deve depender da UI para validar item.
- Estado de porta deve ser persistível em savegame quando relevante.

## Fluxo com chave
1. Player interage com a porta trancada.
2. A porta comunica que precisa de item ou abre o inventário.
3. Player usa item pelo inventário.
4. `BPC_Inventory` consulta o alvo contextual.
5. Porta valida o item.
6. Porta destranca e atualiza seu estado.
