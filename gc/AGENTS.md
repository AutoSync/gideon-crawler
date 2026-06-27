# Unreal MCP workflow

Quando precisar interagir com a Unreal Engine, use o servidor MCP `unreal-mcp`.

Antes de alterar assets, levels, actors, materials ou blueprints:
1. Liste os toolsets disponíveis.
2. Descreva o toolset necessário.
3. Explique a ação planejada.
4. Peça confirmação se a ação for destrutiva, como deletar assets, substituir materiais ou alterar mapas existentes.

Nunca exponha o servidor MCP fora de localhost.
Não execute chamadas MCP paralelas contra a Unreal.