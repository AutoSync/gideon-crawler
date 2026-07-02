# Devlog

## 2026-07-01
- Criado o plugin editor `EslonCode` em `gc/Plugins/EslonCode`, com parser Python para linguagem textual estilo Python, schema Unreal do projeto, exemplo de inventario e emissor C++ inicial para grafos Blueprint gerados.
- Documentado `EslonCode` em `docs/TOOLS/EslonCode.md`, incluindo arquitetura, sintaxe MVP, uso via Python da Unreal e limites atuais do emissor K2.
- Reestruturado `docs/SYSTEMS/Interaction.md` como documento de orquestracao do fluxo de interacao entre player, inventario e atores de mundo.
- Extraidos os detalhes locais dos atores interagiveis para `docs/SYSTEMS/PLAYER.md`, `docs/SYSTEMS/KEY.md` e `docs/SYSTEMS/DOOR.md`.
- Atualizados `docs/SYSTEMS/Inventory.md` e `docs/SYSTEMS/Doors.md` para manter enums, data assets e o fluxo contextual de uso de item no lugar correto.
- Extraidos de `docs/SYSTEMS/Inventory.md` os trechos detalhados de `BPC_Inventory`, `WBP_Inventory` e `WBP_ItemSlot` para documentos proprios, mantendo `Inventory.md` como contexto do sistema e os componentes como espelho literal do estado documentado.

## 2026-06-30
- Expandido `docs/PLOT/OBJECTS_FROM_PLOT.md` com um catalogo de itens orientado por lore, incluindo amuletos, pocoes, cartas, coletaveis e itens-chave candidatos a integracao futura com o inventario.

## 2026-06-29
- Descrito em `docs/TOOLS/Eslon2D.md` o que foi implementado no plugin Eslon2D, incluindo módulos runtime/editor, viewport 2D, tilemap component, estado atual e próximos passos.
- Adicionada documentação-base em `docs/` para alinhar o projeto ao fluxo descrito em `AGENTS.md`.
- Criado `docs/ROADMAP.md` com fases do protótipo e prioridades do MVP.
- Criados documentos iniciais em `docs/SYSTEMS/` para interação, inventário, portas, save/checkpoint, diálogo e localização.
- Atualizado `docs/CURRENT_CONTEXT.md` para referenciar `AGENTS.md`, `gc/AGENTS.md`, `docs/TASKS/` e `docs/TOOLS/`.
## 2026-06-29
- Expandido o Eslon2D com brush de tilemap Paper2D, renderer por chunks, tiles animados por frames de tileset, brush de flipbook e suporte a HLOD/culling.
- Criado `docs/SYSTEMS/Eslon2DTilemap.md` com a decisao de usar `UPaperTileSet` como fonte do novo fluxo de tilemap e de manter World Partition no nivel, nao por tile individual.
