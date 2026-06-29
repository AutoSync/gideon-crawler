# Dialogue System

## Objetivo
Exibir falas, pistas e eventos narrativos de forma integrada à exploração.

## Ativos relacionados
- `gc/Content/BIN_GC/BP/DIALOGSYSTEM/ENUM/E_DialogueSide.uasset`
- `gc/Content/BIN_GC/BP/DIALOGSYSTEM/ENUM/E_DialogueActionType.uasset`
- `gc/Content/BIN_GC/LOCALIZATION/STRINGTABLES/ST_Dialogs.uasset`

## Regras
- Texto narrativo deve usar string tables/localização quando possível.
- Diálogos podem ser acionados por interação, eventos de sala, pickups ou checkpoints.
- UI de diálogo exibe texto e opções, mas não deve conter regra principal de gameplay.
- Ações de diálogo devem ser encaminhadas para sistemas responsáveis.

## Uso inicial
- Pistas de puzzle.
- Falas de descoberta em objetos do cenário.
- Eventos narrativos sobre a libertação de Gideon e a dungeon de Northrean.
