# Interaction System

## Objetivo
Permitir que o Player interaja com objetos próximos do cenário por uma interface comum.

## Ativos relacionados
- `gc/Content/BIN_GC/BP/GAMEPROPS/INTERACTABLES/INTERFACES/BPI_Interactable_GC.uasset`
- `gc/Content/BIN_GC/BP/GAMEPROPS/INTERACTABLES/INTERFACES/BPI_ItemUseTarget.uasset`
- `gc/Content/BIN_GC/BP/PLAYER/INPUT/Interact_Action.uasset`
- `gc/Content/BIN_GC/BP/PLAYER/UI/InteractUI/UI_Interact_Button.uasset`

## Regras
- Actors de cenário expõem interação via interface.
- O Player/Character mantém o estado de interação atual.
- A interação deve funcionar para portas, itens, savepoints, puzzles e objetos narrativos.
- Objetos não precisam indicar previamente que são interativos; o jogador pode descobrir ao se aproximar e interagir.
- Mensagens de feedback devem vir do sistema ou do Actor interagido, não de regra hardcoded na UI.

## Fluxo base
1. Player entra no alcance de um Actor interagível.
2. Player pressiona o input de interação.
3. O sistema chama a função da interface do alvo.
4. O alvo executa sua ação ou retorna feedback.
5. A UI apenas apresenta o feedback.
