# Interaction System

## Objetivo
Permitir que o Player interaja com objetos proximos do cenario por uma interface comum, mantendo um fluxo consistente entre Player, Actor interagivel, inventario e alvo contextual de uso.

## Ativos relacionados
- `gc/Content/BIN_GC/BP/GAMEPROPS/INTERACTABLES/INTERFACES/BPI_Interactable_GC.uasset`
- `gc/Content/BIN_GC/BP/GAMEPROPS/INTERACTABLES/INTERFACES/BPI_ItemUseTarget.uasset`
- `gc/Content/BIN_GC/BP/PLAYER/INPUT/Interact_Action.uasset`
- `gc/Content/BIN_GC/BP/PLAYER/UI/InteractUI/UI_Interact_Button.uasset`

## Escopo deste documento
- Este arquivo descreve a orquestracao do sistema de interacao.
- Fluxos internos de cada actor interagivel foram extraidos para `PLAYER.md`, `KEY.md` e `DOOR.md`.
- Enums, structs, data assets e UI de inventario permanecem no contexto do sistema de inventario em `Inventory.md`.
- Regras de tipos e persistencia de portas permanecem em `Doors.md`.

## Regras
- Actors de cenario expoem interacao via interface.
- O Player/Character mantem o estado de interacao atual.
- A interacao deve funcionar para portas, itens, savepoints, puzzles e objetos narrativos.
- Objetos nao precisam indicar previamente que sao interativos; o jogador pode descobrir ao se aproximar e interagir.
- O widget nao decide se um item funciona; ele apenas repassa a tentativa de uso ao componente ou ao alvo.
- O actor interagivel decide sua propria resposta a `Interact`.
- O alvo contextual de item decide se aceita ou rejeita `UseItem`.

## Contratos centrais

### BPI_Interactable_GC
- `Interact(Interactor : AActor)`
- Contrato minimo para qualquer actor de mundo que possa responder ao input de interacao.

### BPI_ItemUseTarget_GC
- `UseItem(ItemData : DA_InventoryItem)`
- Retorna:
  - `Result : E_ItemUseResult`
  - `ConsumeItemUse : bool`
  - `Message : FText`
- Usado quando um item do inventario precisa ser validado por um alvo especifico do mundo.

## Participantes do fluxo
- `BP_Player2D_GC`: recebe input, guarda `CurrentInteractable` e abre/fecha inventario contextual.
- `BPC_Inventory`: fonte de verdade dos itens do jogador e mediador do uso contextual.
- `WBP_Inventory`: UI que lista itens e aciona funcoes publicas do inventario.
- `BP_ItemPickUp_Key`: actor de coleta que entrega um item ao inventario.
- `BP_Doors_GameProps`: actor que responde a interacao direta e, se trancado, vira alvo contextual de item.

## Mapa macro de execucao

```mermaid
flowchart TD
    A[Actor entra em overlap com o Player] --> B[Actor define CurrentInteractable no Player]
    B --> C[Jogador dispara Interact_Action]
    C --> D{CurrentInteractable valido e implementa BPI_Interactable?}
    D -- Nao --> E[Encerrar tentativa]
    D -- Sim --> F[Player chama Interact no actor]
    F --> G{Tipo de resposta do actor}
    G -- Coleta direta --> H[Actor entrega item ao BPC_Inventory]
    H --> I{AddItem funcionou?}
    I -- Sim --> J[Actor atualiza feedback e pode se destruir]
    I -- Nao --> K[Actor permanece no mundo]
    G -- Acao direta --> L[Actor altera estado proprio]
    G -- Uso contextual --> M[Actor pede ao Player para abrir inventario com Self como alvo]
    M --> N[WBP_Inventory recebe UseContextTarget]
    N --> O[Jogador seleciona item]
    O --> P[BPC_Inventory tenta usar o item selecionado]
    P --> Q[Target executa UseItem(ItemData)]
    Q --> R{Result}
    R -- Success --> S[Alvo atualiza estado e inventario aplica o retorno do uso]
    R -- Fail --> T[Feedback sem alterar o item]
```

## Sequencia ponta a ponta

```mermaid
sequenceDiagram
    actor Jogador
    participant Player as BP_Player2D_GC
    participant Actor as Actor Interagivel
    participant Inv as BPC_Inventory
    participant UI as WBP_Inventory
    participant Target as BPI_ItemUseTarget

    Actor->>Player: BeginOverlap / set CurrentInteractable
    Jogador->>Player: Interact_Action
    Player->>Actor: Interact(Self)

    alt Interacao direta
        Actor->>Inv: AddItem(TypeData) ou acao local
        Actor-->>Player: Feedback ou alteracao de estado
    else Interacao contextual
        Actor->>Player: Evt_OpenInventoryForTarget(InventoryUseContext, CloseSuccessfulUse)
        Player->>UI: InitInventory(Self, Inv, InventoryUseContext, CloseSuccessfulUse)
        Jogador->>UI: Seleciona item e confirma uso
        UI->>Inv: TryUseItemAtIndex(SelectedItemIndex)
        Inv->>Target: UseItem(ItemData) no contexto atual
        Target-->>Inv: Result, ConsumeItemUse, Message
        alt Result = Success
            Inv->>Inv: Atualiza consumo ou permanencia do item
            Target->>Target: Atualiza estado local
            UI->>Player: Evt_CloseInventory()
        else Result != Success
            UI-->>Jogador: Exibe mensagem de feedback
        end
    end

    Actor->>Player: EndOverlap / clear CurrentInteractable se ainda for Self
```

## Fluxos principais

### 1. Descoberta de actor interagivel
1. O actor detecta `BeginOverlap` com o Player.
2. O proprio actor registra `Self` em `CurrentInteractable` do Player.
3. O Player nao precisa procurar atores por trace ou varredura para a interacao basica.
4. Quando o overlap termina, o actor remove a referencia apenas se ainda for o interagivel atual.

### 2. Interacao direta
1. O jogador pressiona `Interact_Action`.
2. O Player valida `CurrentInteractable`.
3. O Player chama `Interact(Self)` no actor.
4. O actor executa sua resposta local.
5. Exemplos: pegar chave, abrir porta comum, ativar savepoint.

### 3. Interacao contextual por item
1. O jogador interage com um actor que precisa de item.
2. O actor nao consome inventario diretamente; ele pede ao Player que abra o inventario com contexto.
3. O widget repassa a tentativa de uso ao `BPC_Inventory`.
4. O `BPC_Inventory` consulta o alvo contextual do uso por `BPI_ItemUseTarget_GC`.
5. O alvo valida compatibilidade, decide consumo e retorna feedback.
6. O inventario aplica o retorno conforme o estado atual do componente.

## Handoffs entre ativos
- `PLAYER.md`: controle do input, ownership de `CurrentInteractable` e ciclo de abertura do inventario.
- `KEY.md`: fluxo do item coletavel que converte interacao direta em `AddItem`.
- `DOOR.md`: fluxo da porta comum/trancada, incluindo `UseItem` contextual.
- `Inventory.md`: enums, structs, data assets, componente de inventario e widget.
- `Doors.md`: tipologia das portas, regras de estado e persistencia.

## Limites de responsabilidade
- O Player decide quando disparar a interacao e qual alvo atual esta em foco.
- O actor interagivel decide o que acontece em `Interact`.
- O inventario decide como listar, procurar e consumir itens do jogador.
- O alvo contextual decide se aquele item funciona naquele contexto.
- A UI apenas exibe estado e chama funcoes publicas.
