# Current Context

## Projeto
Gideon Crawler é um dungeon crawler 2D dark fantasy feito na Unreal Engine 5. O projeto está organizado como um protótipo jogável focado em exploração, interação com cenário, portas, itens-chave, inventário, save/checkpoint, diálogo e localização PT-BR/EN.

## Arquivos de orientação
- `AGENTS.md`: instruções globais do repositório para agentes, prioridades técnicas e convenções de nomes.
- `gc/AGENTS.md`: fluxo específico para interagir com a Unreal via MCP quando for necessário alterar assets, levels, actors, materiais ou Blueprints.
- `docs/ROADMAP.md`: visão de desenvolvimento por fases e prioridades do protótipo.
- `docs/DEVLOG.md`: registro cronológico de mudanças relevantes.
- `docs/DECISIONS.md`: decisões arquiteturais já tomadas.
- `docs/SYSTEMS/`: documentação por sistema antes de mexer em gameplay ou Blueprint relacionado.
- `docs/TASKS/`: tarefas detalhadas, começando por `0001-inventory-ui-integration.md`.
- `docs/TOOLS/`: notas de ferramentas e workflows, incluindo `Eslon2D.md`.

## Foco atual
Implementação do sistema de inventário integrado com interação de cenário, portas trancadas e uso de itens-chave.

## Estado atual
- Existe enum de itens: Key, Gemstone, Seal.
- O conteúdo atual inclui `E_ItemTypeGC`, `E_ItemTargetMode`, `E_ItemUseResult`, `SInventoryItem`, `BPI_Interactable_GC` e `BPI_ItemUseTarget`.
- O Player/Character usa componente de inventário (`BPC_Inventory`) e deve manter lógica de inventário fora do GameMode.
- Porta possui ou deve possuir identificação de chave/contexto, como `KeyCode`.
- Chave é um Actor posicionado no cenário e interagível.
- Ao interagir com a chave, ela é adicionada ao inventário e destruída do mundo.
- Ao interagir com uma porta trancada, o jogador pode abrir o inventário.
- Ao usar uma chave compatível dentro do trigger da porta, a porta destranca.
- Se a chave for usada fora de contexto, exibir mensagem: "Não é possível usar aqui."

## Decisões já tomadas
- Inventário deve ficar no Player/Character via Actor Component.
- `BPC_Inventory` deve ser um Actor Component, não um Actor Blueprint de mundo.
- Itens de cenário devem ser Actors interagíveis.
- A UI do inventário não decide se o item funciona; ela chama `TryUseItem`.
- Actors de cenário expõem interação por interface.

## Próxima etapa
Expandir o sistema de inventário integrando:
- Dados dos itens.
- UI de inventário.
- Sistema de interação.
- Uso de itens no personagem.
- Uso de itens no cenário.
- Persistência mínima para savegame.
