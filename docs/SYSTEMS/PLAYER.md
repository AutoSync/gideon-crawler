# Player Interaction Asset

## Objetivo
Documentar o trecho atual do fluxo do `BP_Player2D_GC`, extraido para um documento proprio sem reinterpretacao do comportamento.

## Ativos relacionados
- `gc/Content/BIN_GC/BP/PLAYER/MASTER/BP_Player2D_GC.uasset`
- `gc/Content/BIN_GC/BP/PLAYER/MASTER/BPC_Inventory.uasset`
- `gc/Content/BIN_GC/BP/PLAYER/INPUT/Interact_Action.uasset`
- `gc/Content/BIN_GC/BP/PLAYER/UI/Menus/WBP_Inventory.uasset`

## Fluxo extraido do sistema de interacao

### BP_Player2D_GC : Character2D

[Components]
- Inventory = BPC_Inventory: Actor Component: Componente que gerencia o inventario do Player, permitindo adicionar, remover e usar itens.

[Interfaces]
- Interact : BPI_Interactable

[Variables]
- CurrentInteractable = Actor: Referencia ao Actor interativo mais proximo do Player, usado para determinar com qual objeto o Player pode interagir no momento.
- CurrentInventoryWidget = WBP_Inventory: Widget: Referencia ao widget de inventario atualmente exibido na tela, usado para mostrar os itens do Player e permitir interacao com eles.

[InputAction] Interact_Action : [Completed]
IsValid? CurrentInteractable And Does Implement BPI_Interactable?
	False:
		→ Return
	True:
		→ Call Interact on CurrentInteractable(Message)
			Target: CurrentInteractable
			Interactor: Self

Evt_OpenInventoryForTarget (InventoryUseContext : Actor, CloseSuccessfulUse : Bool) : [CustomEvent] : Abre o widget de inventario do Player, permitindo que ele use itens em um alvo especifico.
	IsValid? CurrentInventoryWidget
		False: Create Widget WBP_Inventory
			OwningPlayer: Get Player Controller
			Return Value: CurrentInventoryWidget
		CurrentInventoryWidget.InitInventory
			OwningPlayer: Self
			InventoryComponent: Inventory
			UseContextTarget: InventoryUseContext
			CloseSuccessfulUse: CloseSuccessfulUse
		Add to Viewport CurrentInventoryWidget
		Set Input Mode UI Only
			In Widget to Focus: CurrentInventoryWidget
			PlayerController: Get Player Controller
		Set Ignore Move Input: True
		Set Show Mouse Cursor: True

Evt_CloseInventory : [CustomEvent] : Fecha o widget de inventario do Player e retorna o controle para o jogo.
	IsValid? CurrentInventoryWidget
		True:
			Remove from Parent CurrentInventoryWidget
			Set CurrentInventoryWidget = None
			Set Input Mode Game Only
				PlayerController: Get Player Controller
			Set Ignore Move Input: False
				PlayerController: Get Player Controller
			Set Show Mouse Cursor: False
				PlayerController: Get Player Controller

OpenInventoryByDefault : [CustomEvent] : Abre o widget de inventario do Player automaticamente, usado para testes ou situacoes especificas do jogo.
	Evt_OpenInventoryForTarget
		InventoryUseContext: None
		CloseSuccessfulUse: False
