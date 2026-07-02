# Door Interactable Asset

## Objetivo
Documentar o trecho atual do fluxo do actor `BP_Doors_GameProps`, extraido para um documento proprio sem reinterpretacao do comportamento.

## Ativos relacionados
- `gc/Content/BIN_GC/BP/GAMEPROPS/DOORS/BP_Doors_GameProps.uasset`
- `gc/Content/BIN_GC/BP/GAMEPROPS/INTERACTABLES/INTERFACES/BPI_Interactable_GC.uasset`
- `gc/Content/BIN_GC/BP/GAMEPROPS/INTERACTABLES/INTERFACES/BPI_ItemUseTarget.uasset`
- `gc/Content/BIN_GC/BP/PLAYER/MASTER/BP_Player2D_GC.uasset`
- `gc/Content/BIN_GC/BP/PLAYER/MASTER/BPC_Inventory.uasset`

## Fluxo com chave
1. O Player entra no trigger da porta e a define como `CurrentInteractable`.
2. O Player dispara `Interact_Action`.
3. A porta comunica que precisa de item ou abre o inventario em contexto.
4. Player usa item pelo inventario.
5. `BPC_Inventory` consulta o alvo contextual.
6. Porta valida o item.
7. Porta destranca e atualiza seu estado.

### BP_Doors_Gameprops : Actor

[Components]
- Root : Scene Component: Componente raiz da porta, usado para posicionamento e rotacao.
	- Icon: Billboard Component: Componente que exibe um icone da porta no editor, mas nao e visivel no jogo.
	- Box_Trigger : Box Component: Componente de colisao que detecta quando o Player esta proximo o suficiente para interagir com a porta.
	- Box_Colision : Box Collision: Componente de colisao que impede o Player de atravessar a porta quando ela esta fechada.
	- LeftDoor_Sprite: Sprite Component: Componente que exibe a parte esquerda da porta no mundo do jogo.
	- RightDoor_Sprite: Sprite Component: Componente que exibe a parte direita da porta no mundo do jogo.

[Interfaces]
Interact : BPI_Interactable
TryReceiveItem : BPI_ItemUseTarget

[Variables]
- OpenDoor = bool: Indica se a porta esta aberta ou fechada.
- IsLocked? = bool: Indica se a porta esta trancada ou destrancada.
- RequiredItem = DA_InventoryItem: PrimaryDataAsset: Referencia ao Data Asset do item necessario para abrir a porta, caso exista.
- RequiredItemCode = Name: Nome do item necessario para abrir a porta, usado para verificar se o item usado pelo jogador e o correto.
- ConsumeItemOnInteract = bool: Indica se o item usado para abrir a porta deve ser consumido (removido do inventario) apos a interacao bem-sucedida.
- UnlockPermanently = bool: Indica se a porta permanecera destrancada apos a primeira interacao bem-sucedida com o item correto.
- SpriteOpen = Sprite: Sprite: Referencia ao sprite que representa a porta aberta, usado para atualizar a aparencia da porta quando ela e aberta.
- SpriteClosed = Sprite: Sprite: Referencia ao sprite que representa a porta fechada, usado para atualizar a aparencia da porta quando ela e fechada.

Build : [CustomEvent] : Carrega o estado inicial da porta posterior a um savegame.
	isLocked?
		False: Open?
			True: OpenDoor
			False: CloseDoor

OnComponentBeginOverlap : [Box_Trigger] : Detecta quando o Player entra na area de interacao da porta.
	Cast to BP_Player2D_GC
		Object: Get Player Character
		BP_Player2D_GC.CurrentInteractable = Self

OnComponentEndOverlap : [Box_Trigger] : Detecta quando o Player sai da area de interacao da porta.
	Cast to BP_Player2D_GC
		Object: Get Player Character
		BP_Player2D_GC.CurrentInteractable == Self ?
			True: BP_Player2D_GC.CurrentInteractable = None

EventInteract (Interactor : AActor) : [BPI_Interactable_GC] : Executa a logica de interacao quando o Player interage com a porta.
	Open?
		True: OpenDoor
		False: IsLocked?
			True: Call TryUnlock
			False: CloseDoor

TryUnlock (Interactor : AActor) : [CustomEvent] : Tenta destrancar a porta usando o item correto do inventario do Player.
	isValid?
		False: CheckItemInInventory

CheckItemInInventory [CustomEvent] : Verifica se o Player possui o item necessario para destrancar a porta.
	Cast to BP_Player2D_GC
		Object: Get Player Character
		BP_Player2D_GC.Evt_OpenInventoryForTarget(InventoryUseContext)
			IventoryUseContext = Self

OpenDoor [CustomEvent] : Abre a porta, atualiza o sprite e desativa a colisao da porta.
	Set OpenDoor = True
	Set SpriteOpen on LeftDoor_Sprite
	Set SpriteOpen on RightDoor_Sprite
	No Collision on Box_Colision

CloseDoor [CustomEvent] : Fecha a porta, atualiza o sprite e ativa a colisao da porta.
	Set OpenDoor = False
	Set SpriteClosed on LeftDoor_Sprite
	Set SpriteClosed on RightDoor_Sprite
	Enable Collision on Box_Colision
