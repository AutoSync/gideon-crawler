# Devlog

## 2026-06-29
- Descrito em `docs/TOOLS/Eslon2D.md` o que foi implementado no plugin Eslon2D, incluindo módulos runtime/editor, viewport 2D, tilemap component, estado atual e próximos passos.
- Adicionada documentação-base em `docs/` para alinhar o projeto ao fluxo descrito em `AGENTS.md`.
- Criado `docs/ROADMAP.md` com fases do protótipo e prioridades do MVP.
- Criados documentos iniciais em `docs/SYSTEMS/` para interação, inventário, portas, save/checkpoint, diálogo e localização.
- Atualizado `docs/CURRENT_CONTEXT.md` para referenciar `AGENTS.md`, `gc/AGENTS.md`, `docs/TASKS/` e `docs/TOOLS/`.
## 2026-06-29
- Expandido o Eslon2D com brush de tilemap Paper2D, renderer por chunks, tiles animados por frames de tileset, brush de flipbook e suporte a HLOD/culling.
- Criado `docs/SYSTEMS/Eslon2DTilemap.md` com a decisao de usar `UPaperTileSet` como fonte do novo fluxo de tilemap e de manter World Partition no nivel, nao por tile individual.
