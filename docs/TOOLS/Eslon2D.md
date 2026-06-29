# Eslon2D

## Resumo
`Eslon2D` é um plugin local do projeto para apoiar desenvolvimento 2D na Unreal Engine. Ele foi criado como um framework de base para tilemaps, organização de atores em camadas 2D e uma viewport ortográfica travada para edição de fases.

Local do plugin:
- `gc/Plugins/Eslon2D`

## O que foi feito

### Estrutura do plugin
- Criado manifesto `Eslon2D.uplugin`.
- Plugin configurado como `EnabledByDefault`.
- Plugin permite conteúdo (`CanContainContent: true`).
- Criados dois módulos:
  - `Eslon2D`: módulo runtime.
  - `Eslon2DEditor`: módulo editor.

### Módulo runtime: `Eslon2D`
Foi criada a fundação de tilemap em C++:

- `UEslon2DTileMapAsset`
  - Data Asset editável por Blueprint.
  - Guarda largura, altura, tamanho do tile e camadas.
  - Expõe funções para validar coordenada e converter coordenada em índice.

- `UEslon2DTileMapComponent`
  - Actor Component spawnável por Blueprint.
  - Mantém uma cópia runtime das camadas do tilemap.
  - Não usa Tick.
  - Expõe evento `OnTileChanged`.
  - Expõe APIs Blueprint-callable:
    - `InitializeFromAsset`
    - `ResizeMap`
    - `SetTile`
    - `GetTile`
    - `ClearTile`
    - `IsValidCoordinate`

- Tipos de dados:
  - `FEslon2DTileRef`
    - `TileId`
    - `Variant`
    - `Animation`
    - `bIsEmpty`
  - `FEslon2DTileLayer`
    - `LayerName`
    - Lista de tiles da camada.

### Módulo editor: `Eslon2DEditor`
Foi criada uma viewport customizada para edição 2D:

- Entrada no menu:
  - `Window > Eslon 2D Viewport`
- Aba registrada como viewport nomad do editor.
- Viewport ortográfica travada.
- Planos disponíveis:
  - `Top Down`: edição em XY, profundidade em Z.
  - `Side Scroller`: edição em XZ, profundidade em Y.
  - `Front`: edição em YZ, profundidade em X.
- Camadas disponíveis:
  - `Background`
  - `Default`
  - `Gameplay`
  - `Foreground`
  - `UI`
- Botão `Assign Selected`
  - Aplica folder `2D/<Layer>`.
  - Remove tags antigas de layer 2D.
  - Adiciona tag `2DLayer.<Layer>`.
  - Move o ator selecionado para a profundidade da camada no plano ativo.
- Botão `Frame Selected`
  - Centraliza a viewport nos atores selecionados.

### Controles da viewport
- Arrastar com botão direito: pan.
- Scroll do mouse: zoom.
- Rotação da câmera fica travada pelo viewport client.
- Zoom limitado entre `128` e `262144`.

## Uso no Gideon Crawler
O plugin serve como suporte técnico para o fluxo 2D do projeto:

- Organizar atores de cenário em camadas consistentes.
- Trabalhar com visão ortográfica adequada a salas top-down.
- Preparar uma base própria para tilemaps runtime.
- Evitar depender de lógica de edição espalhada em Blueprints de gameplay.

Para a dungeon atual, o uso mais imediato é a organização de props, portas, tilemaps, objetos interagíveis e elementos visuais em camadas previsíveis.

## Estado atual
Funcionalidades já implementadas:
- Plugin carregável pela Unreal.
- Módulo runtime compilável.
- Componente de tilemap com operações básicas.
- Data Asset de tilemap.
- Viewport editor 2D.
- Atribuição de camada para atores selecionados.
- Tags e folders automáticos para organização.

Limitações atuais:
- O tilemap runtime ainda guarda dados, mas não renderiza tiles sozinho.
- Ainda não há brush/pencil visual para pintar tile direto na viewport.
- Ainda não há integração direta com os tilemaps e assets existentes em `Content/BIN_GC/TILEMAP`.
- Ainda não há serialização específica de estado de tilemap para savegame.

## Próximos passos sugeridos
- Criar asset/action para gerar `UEslon2DTileMapAsset` pelo editor.
- Adicionar ferramenta visual de pintura por tile.
- Integrar renderização com Paper2D, sprites ou instanced mesh 2D.
- Criar conversor/importador para tilemaps existentes do projeto.
- Documentar profundidades exatas de cada layer.
- Validar como o plugin conversa com o fluxo de salas do MVP.

## Observações de build
Builds do editor UE 5.8 podem exigir o .NET Framework SDK usado pela cadeia de dependências da Unreal. Se `BuildPlugin` falhar antes de compilar o plugin com erro relacionado a `SwarmInterface` ou `NetFxSDK`, instalar um .NET Framework SDK 4.6 ou mais novo pelo Visual Studio Installer.
