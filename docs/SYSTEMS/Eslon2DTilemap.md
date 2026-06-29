# Eslon2D Tilemap

## Objetivo
Expandir o fluxo de tilemap do Paper2D com ferramentas inspiradas no TileMap da Godot, mantendo compatibilidade com assets Paper2D e evitando colocar regra de gameplay em UI/editor.

## Modelo
- `UPaperTileMapComponent` continua sendo a fonte de dados e edicao.
- `UEslon2DPaperTileMapBrushComponent` altera celulas do tilemap Paper2D.
- `UEslon2DPlaneTileMapRendererComponent` pode renderizar o resultado como planos Paper2D.
- `UEslon2DFlipbookBrushComponent` posiciona flipbooks completos em coordenadas de tile.

## Ferramentas de pintura
- Tile unico.
- Paleta aleatoria com peso.
- Padrao multi-tile capturado de selecao retangular.
- Linha.
- Retangulo preenchido ou contorno.
- Elipse preenchida ou contorno.
- Flood fill.
- Borracha.
- Seed deterministica para resultados reproduziveis.

## Tiles animados
Paper2D nao permite trocar uma celula do tilemap por flipbook diretamente. Para animacao, o Eslon2D usa planos:

- Animacao por frames de tileset:
  - Define nome, frames, FPS e loop.
  - Pode ser criada por indices do tileset.
  - Pode ser criada por linha/colunas do tileset.
  - Exemplo: linha 10, colunas 1, 2 e 3, animadas como `WaterFlow`.
- Flipbook completo:
  - Usado quando o efeito ja existe como `UPaperFlipbook`.
  - Bom para agua, cachoeira, vapor e props interativos animados.

## Renderizacao
- Tiles estaticos sao agrupados por chunk/camada com `UPaperGroupedSpriteComponent`.
- Tiles animados por tileset usam sprite transiente por frame.
- Flipbooks usam `UPaperFlipbookComponent`.
- O tilemap Paper2D original pode ser ocultado depois da construcao dos planos.

## Performance
- Usar chunks pequenos em vez de um unico actor gigante.
- `ChunkSizeInTiles` controla o tamanho dos blocos renderizados.
- Chunks estaticos podem usar culling por distancia.
- Chunks estaticos podem participar de HLOD.
- Tiles animados devem ser usados com moderacao porque trocam frame em Tick.

## World Partition
World Partition deve dividir o cenario por atores, salas ou blocos de dungeon, nao por tiles individuais.

Recomendacao:
- Criar um actor por sala ou bloco grande.
- Cada actor contem seus tilemaps/chunks locais.
- Usar World Partition, Level Instance ou Data Layers para carregar/descarregar esses atores.
- Manter props interativos e gameplay em atores/componentes separados quando precisarem de logica propria.

## Proximos passos
- Criar painel visual na viewport Eslon2D para selecionar tiles por textura.
- Criar botoes de pencil, line, rectangle, ellipse, bucket, eraser e random paint.
- Salvar bibliotecas de brushes, padroes e animacoes.
- Criar actor padrao de sala/chunk para uso com World Partition ou Level Instance.
