# Key Interactable Asset

## Objetivo
Documentar o trecho atual do fluxo do actor `BP_ItemPickUp_Key`, extraido para um documento proprio sem reinterpretacao do comportamento.

## Ativos relacionados
- `gc/Content/BIN_GC/BP/GAMEPROPS/INTERACTABLES/MASTER/BP_ItemPickUp_Key.uasset`
- `gc/Content/BIN_GC/BP/GAMEPROPS/INTERACTABLES/INTERFACES/BPI_Interactable_GC.uasset`
- `gc/Content/BIN_GC/BP/PLAYER/MASTER/BP_Player2D_GC.uasset`
- `gc/Content/BIN_GC/BP/PLAYER/MASTER/BPC_Inventory.uasset`

## Fluxo extraido do sistema de interacao

### BP_ItemPickUp_Key : Actor

[Components]
- Scene : Scene Component: Componente raiz do item, usado para posicionamento e rotacao.
	- TextureSprite: Texture2D Component: Componente que exibe a textura do item no mundo do jogo.
	- Trigger: Sphere Component: Componente de colisao que detecta quando o Player esta proximo o suficiente para interagir com o item.

[Interfaces]
Interact : BPI_Interactable

[Variables]
TypeData = DA_InventoryItem: PrimaryDataAsset: Referencia ao Data Asset que contem informacoes detalhadas sobre o item, como tipo, quantidade, e efeitos.
Size = float: Tamanho do item no mundo do jogo, usado para ajustar a escala do TextureSprite e a area de colisao do Trigger.

[BeginEvent]
Call Build

Build : [CustomEvent]
Create Dynamic Material Instance
	Target: TextureSprite
	Source Material: TextureSprite.Material
	Return Value: DynamicMaterialInstance
DynamicMaterialInstance.Set Texture Parameter Value
	Parameter Name: "TextureSprite"
	Value: TypeData.DisplayIcon
SetRelative Scale 3D
	size = size * 0,05
	make vector
		x: size
		y: size
		z: 1,0

OnComponentBeginOverlap : [Trigger]
	Cast to BP_Player2D_GC
		Object: Get Player Character
		BP_Player2D_GC.CurrentInteractable = Self

OnComponentEndOverlap : [Trigger]
	Cast to BP_Player2D_GC
		Object: Get Player Character
		BP_Player2D_GC.CurrentInteractable == Self ?
			True: BP_Player2D_GC.CurrentInteractable = None

EventInteract : [BPI_Interactable_GC]
	Cast to BP_Player2D_GC
		Object: Get Player Character
		BP_Player2D_GC.BPC_InventoryComponent.AddItem(TypeData, 1) ?
			True:
				Call Destroy Actor
