# Architecture Decisions

## ADR-001 - Inventário no Player
O inventário será implementado como Actor Component anexado ao Player/Character.

Motivo:
- O inventário pertence ao personagem.
- Facilita salvar/carregar estado.
- Evita dependência indevida do GameMode.
- Permite reutilizar o componente em outros personagens futuramente.

## ADR-002 - Uso de item depende de contexto
A função `TryUseItem` deve consultar o contexto atual de interação.

Exemplo:
- Se o personagem está dentro do trigger de uma porta compatível, a chave funciona.
- Se não há alvo válido, retorna "Não é possível usar aqui."

## ADR-003 - UI não contém regra de gameplay
Widgets apenas exibem dados e chamam funções públicas do InventoryComponent ou InteractionComponent.

## ADR-004 - Documentação como contexto operacional
`AGENTS.md` e `docs/` são a fonte de orientação para mudanças no projeto.

Motivo:
- Mantém contexto, roadmap, decisões e sistemas acessíveis antes de alterar Blueprints ou código.
- Reduz risco de colocar lógica no lugar errado.
- Facilita continuidade entre sessões de desenvolvimento.
## ADR-005 - Eslon2D usa tileset Paper2D como fonte
O novo ativo de tilemap do Eslon2D deve reutilizar `UPaperTileSet` existente do Paper2D como fonte de tiles.

Motivo:
- Evita duplicar atlas e metadados.
- Mantém o fluxo do Content Browser alinhado com o Paper2D.
- Facilita capturar sequencias de frames do mesmo tileset para animacoes de agua, cachoeira e cenarios.

## ADR-006 - Renderizacao por chunks e World Partition no nivel
O Eslon2D deve renderizar tilemaps em chunks/blocos e deixar o streaming de salas para World Partition, Level Instance ou Data Layers.

Motivo:
- Evita um actor gigante com milhares de componentes por tile.
- Mantém o custo de renderizacao e atualizacao controlavel.
- Permite HLOD/culling nos chunks estaticos.
- Permite carregar/descarregar salas inteiras sem quebrar a estrutura de tiles.

## ADR-007 - EslonCode como ponte textual para Blueprints
O fluxo textual para gerar Blueprints sera implementado como plugin editor separado chamado `EslonCode`.

Motivo:
- Mantem a ferramenta fora da logica principal de gameplay.
- Permite usar Python da Unreal para parser, schema e automacao de editor.
- Permite usar C++ apenas onde a API K2 exige acesso mais direto a grafos, pins e nodes.
- Evita sobrescrever Blueprints manuais: o emissor so substitui grafos marcados como `@EslonCodeGenerated`.
- Mantem o dialeto sensivel ao contexto do projeto por schema versionado, em vez de hardcode espalhado em UI ou GameMode.
