# Roadmap

## Objetivo do protótipo
Construir uma dungeon pequena e jogável que prove o núcleo de Gideon Crawler: exploração 2D, interação com cenário, inventário, portas, itens-chave, puzzles simples, checkpoint e uma condição de conclusão.

## MVP recomendado
- Uma dungeon com 5 salas.
- 1 personagem jogável.
- 1 tipo de inimigo.
- 1 sistema de chave.
- 2 tipos de puzzle.
- 1 objetivo final.
- 1 tela de vitória.

## Fase 1 - Base jogável
- [x] Movimento básico do jogador.
- [x] Colisão e tilemap inicial.
- [x] Porta abrindo/fechando por interação.
- [x] Item coletável básico.
- [x] Inventário com adicionar/remover item.
- [ ] HUD de interação.
- [ ] Ataque básico e dano.
- [ ] Feedback de mensagem para interação.

## Fase 2 - Inventário em contexto
- [ ] Consolidar `BPC_Inventory` como fonte de verdade do inventário.
- [ ] Consolidar `SInventoryItem` com dados suficientes para UI, uso e savegame.
- [ ] Criar/ajustar `TryUseItem`.
- [ ] Integrar UI de inventário com o componente sem regra principal de gameplay no Widget.
- [ ] Integrar uso de chave com porta trancada por `BPI_ItemUseTarget`.
- [ ] Exibir "Não é possível usar aqui." quando não houver alvo válido.

## Fase 3 - Sala 1
- [ ] Ensinar movimento.
- [ ] Ensinar combate simples.
- [ ] Ensinar interação com porta.
- [ ] Conectar mensagem/HUD de interação ao fluxo de sala.

## Fase 4 - Puzzles iniciais
- [ ] Alavanca + porta.
- [ ] Botão de pressão + porta.
- [ ] Bloco empurrável.
- [ ] Uma sala com puzzle simples resolvível.

## Fase 5 - Progressão e persistência
- [ ] Checkpoint funcional.
- [ ] Save/load de progresso essencial.
- [ ] Transição entre salas.
- [ ] Persistir estados de portas, puzzles e itens coletados.

## Fase 6 - Conteúdo vertical
- [ ] Sala com inimigo simples.
- [ ] Sala com sequência de alavancas ou símbolos.
- [ ] Sala final com selo ou chave final.
- [ ] Tela de vitória.

## Referências
- `Planning/Game/GideonCrawler.md`
- `Planning/Development/Roadmap.md`
- `docs/TASKS/0001-inventory-ui-integration.md`
