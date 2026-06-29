# Gideon Crawler - Agent Instructions

## Projeto
Gideon Crawler é um jogo 2D/ dark fantasy dungeon crawler desenvolvido na Unreal Engine 5.

## Prioridade técnica
1. Sistemas devem ser modulares.
2. Preferir Actor Components para lógica reutilizável.
3. Evitar colocar lógica de inventário no GameMode.
4. O Player/Character possui componentes de interação, inventário e estado.
5. Actors de cenário expõem interação via interface.
6. UI nunca deve conter regra principal de gameplay; ela apenas chama funções do sistema.

## Sistemas atuais
- Interação com objetos do cenário
- Portas com trigger/interação
- Inventário
- Itens-chave
- Savegame/checkpoint
- Diálogo
- Localização PT-BR/EN

## Convenções
- Blueprints principais usam prefixo BP_
- Interfaces usam prefixo BPI_
- Components usam prefixo BPC_
- Enums usam prefixo E_
- Structs usam prefixo S_
- Widgets usam prefixo WBP_

## Antes de alterar código ou Blueprint
1. Ler docs/CURRENT_CONTEXT.md
2. Ler docs/ROADMAP.md
3. Ler o documento do sistema específico em docs/SYSTEMS/
4. Atualizar docs/DEVLOG.md após alterações relevantes
5. Atualizar docs/DECISIONS.md quando uma decisão arquitetural for tomada