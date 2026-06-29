# Savegame and Checkpoint System

## Objetivo
Persistir progresso essencial do jogador e restaurar o jogo a partir de pontos de save ou checkpoint.

## Ativos relacionados
- `gc/Content/BIN_GC/BP/PLAYER/SAVEGAMES/GC_Savegame.uasset`
- `gc/Content/BIN_GC/BP/GAMEPROPS/INTERACTABLES/MASTER/BP_Savepoint_GC.uasset`
- `gc/Content/BIN_GC/TEXTURES/SPRITES/SAVEPOINTS/savepoints.uasset`
- `gc/Content/BIN_GC/TEXTURES/SPRITES/SAVEPOINTS/checkpoint.uasset`

## Regras
- Savegame deve guardar dados suficientes para reconstruir estado do Player e da dungeon.
- Inventário deve salvar itens, quantidades e identificadores necessários.
- Portas, puzzles e itens coletados devem ter estado persistível quando fizerem parte da progressão.
- Morte deve retornar ao último checkpoint ou ponto de salvamento válido.

## Dados mínimos previstos
- Local ou sala atual do Player.
- HP/MP/XP quando esses sistemas estiverem ativos.
- Inventário.
- Estado de portas.
- Estado de puzzles.
- Itens únicos já coletados.
- Último checkpoint.
