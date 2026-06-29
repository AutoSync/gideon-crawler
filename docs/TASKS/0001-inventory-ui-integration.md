# Task 0001 - Inventory UI Integration

## Objetivo
Implementar fluxo de inventário com uso de item em contexto de cenário.

## O Inventario será implementado como Actor Component anexado ao Player/Character, contendo:

- BPC_InventoryComponent: Actor Component anexado ao Player/Character que gerencia a lista de itens, adiciona/remover itens, e expõe funções públicas para interação com o inventário.
    - [x] Adicionar item ao inventário
    - [x] Remover item do inventário
    - [x] Consumir item do inventário
    - [ ] Equipar item do inventário
    - [ ] Descartar item do inventário
- E_ItemType: Enum que define os tipos de itens disponíveis no jogo (ex: Chave, Poção, Arma, Armadura, etc.).
    - [x] Chave
    - [x] Health Potion
    - [x] Mana Potion
    - [x] Gemstone
    - [x] Selo
- S_InventoryItem: Struct que representa um item no inventário, contendo informações como ItemType, quantidade, e dados específicos do item.
    - [ ] 
- WBP_Inventory: Widget que exibe a lista de itens do inventário e permite ao jogador selecionar um item para usar, equipar ou descartar.
- WBP_SlotItem: Widget que representa um item individual no inventário, exibindo ícone, quantidade e estado (equipado, selecionado, etc.).

## Escopo
- Criar/ajustar BPC_InventoryComponent
- Criar estrutura de item
- Criar enum de tipo de item
- Criar Actor de item coletável
- Criar integração com WBP_Inventory
- Criar função TryUseItem
- Integrar com porta trancada

## Fora do escopo
- Sistema de loja
- Crafting
- Equipamentos complexos
- Multiplayer

## Fluxo esperado
1. Player interage com BP_KeyPickup.
2. Item é adicionado ao inventário.
3. Actor da chave é destruído.
4. Player entra no trigger da porta.
5. Player abre inventário.
6. Player seleciona chave.
7. UI chama TryUseItem.
8. InventoryComponent consulta InteractionComponent.
9. Porta valida ItemType + KeyCode.
10. Porta destranca.
11. Chave é removida ou reduz usos restantes.

## Critérios de aceite
- Usar chave correta abre porta correta.
- Usar chave errada mostra erro.
- Usar chave fora de contexto mostra "Não é possível usar aqui."
- UI não contém lógica de validação da porta.
- Inventário persiste dados suficientes para savegame.