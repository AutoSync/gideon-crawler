# Objetos que contem informacoes sobre o universo do jogo

Este documento lista itens que podem virar `DA_InventoryItem`, recompensas de exploracao, drops, chaves de progressao ou objetos de lore.

## Convencoes

- `E_ItemRarity = Basico, Avancado, Raro, Lendario`
- Tipos cobertos neste documento: `Amulet`, `HealthPotion`, `ManaPotion`, `Card`, `Collectable`, `KeyItem`.
- `Card` e `KeyItem` devem ser tratados como extensoes candidatas do inventario, nao como substituicao do enum atual ja documentado.
- `E_EquipSlot = Attack, Defense, ManaReg`

### Formato base para amuletos, pocoes e cartas

`Nome do Item (Raridade) : [Power : int32, Recharge : float, ManaCost : int32, Duration : float]`

- `Power`: intensidade do efeito principal.
- `Recharge`: tempo de recarga ou reutilizacao.
- `ManaCost`: custo de mana para ativacao; em consumiveis normalmente e `0`.
- `Duration`: duracao do efeito; `0` indica efeito instantaneo.

### Formato base para coletaveis

`Nome do Item (Raridade) : [StackLimit : int32, TradeValue : int32, LoreValue : int32, QuestValue : int32]`

- `StackLimit`: quantidade maxima por pilha.
- `TradeValue`: valor de troca ou venda.
- `LoreValue`: importancia para codex, historia ou descoberta.
- `QuestValue`: `0` para comum, `1` para item com uso em missao ou progressao.

## Amuletos

Amuletos sao itens equipaveis que alimentam o combate, a defesa e a regeneracao do jogador. Eles devem conversar com `E_EquipSlot`.

### Attack

Para ataque, `Duration` define quanto tempo o projetil ou efeito energetico permanece ativo. Se for `0`, o projetil usa a duracao padrao de 15 segundos.

- Olho de Horus: (Basico)
    - Aumenta o dano de ataque do jogador.
    - Rubras almas cristalizadas que permitem transformar mana em projeteis de energia.
    - (1, 2.0, 1, 0)

- Seiva de Carbais Weeds: (Avancado)
    - Amuleto de maior poder de ataque e menor tempo de recarga, com custo maior de mana.
    - A seiva da criatura de Floris canaliza mana de forma agressiva e instavel.
    - (5, 0.85, 2, 0)

- Fagulha de Mhai: (Raro)
    - Amplifica projeteis com energia ignea e aumenta o impacto contra grupos pequenos.
    - Fragmentos recolhidos perto de chamas corrompidas ainda carregam o furor de Mhai.
    - (8, 0.7, 3, 1.5)

- Cristal Mitral: (Lendario)
    - Amuleto lendario de alto dano, recarga curta e custo elevado de mana.
    - Cristal raro encontrado nas profundezas das cavernas de Mitral, capaz de condensar mana em disparos densos.
    - (10, 0.5, 3, 0)

### Defense

Para defesa, `Duration = 0` significa protecao instantanea. Valores maiores mantem a barreira ativa por alguns segundos.

- Lua de Alcherion: (Basico)
    - Cria um escudo simples que reduz o dano recebido.
    - Alcherion, mago viajante de Irina, carregava esse amuleto como garantia de retorno.
    - (1, 2.0, 1, 0)

- Pedra de Elbor: (Avancado)
    - Maior poder defensivo e menor recarga, com custo adicional de mana e curta duracao ativa.
    - Elbor liderou legioes ao lado do Castelo Mamba, protegido por um escudo quase impenetravel.
    - (5, 1.85, 2, 2)

- Muralha de Bouros: (Raro)
    - Invoca um escudo mais pesado, ideal para segurar corredores e impactos frontais.
    - Rochas marcadas pelo nome de Bouros foram usadas por oleiros de guerra para erguer linhas de defesa improvisadas.
    - (8, 1.45, 2, 2.5)

- Legiao Szaris: (Lendario)
    - Escudo lendario de longa sustentacao e alto poder de mitigacao.
    - Quando Melbor criou esse escudo, foi capaz de enfrentar sozinho a investida de um Colossal, ainda que nao pudesse vence-lo.
    - (12, 1.2, 3, 3)

### ManaReg

Para regeneracao de mana, apenas `Power` e `Recharge` sao relevantes. `ManaCost` e `Duration` devem permanecer `0`.

- Cristal de Mana: (Basico)
    - Aumenta a regeneracao de mana do jogador.
    - Cristal raro das profundezas de Mitral, capaz de devolver pequenas cargas de energia.
    - (1, 15.0, 0, 0)

- Cristal de Mana Avancado: (Avancado)
    - Maior recuperacao de mana com recarga mais curta.
    - Variante refinada negociada por mercadores de Odrun.
    - (5, 10.0, 0, 0)

- Tear de Manais: (Raro)
    - Puxa linhas de mana do ambiente e acelera a recuperacao em combate.
    - Fragmentos do tear dos tecidos da vida ainda pulsam com a presenca de Manais.
    - (8, 8.0, 0, 0)

- Coracao de Windus: (Lendario)
    - Regeneracao intensa para builds de conjuracao constante.
    - Joia ritual preservada de Windus, usada por nobres e oraculos que moldavam destinos com magia.
    - (12, 6.0, 0, 0)

## Pocoes

Pocoes sao consumiveis de uso rapido. Em geral, `ManaCost` e sempre `0`. Para cura ou restauracao imediata, use `Duration = 0`. Para buffs temporarios, use `Duration > 0`.

### Pocoes de Vida

- Infusao de Bruxis: (Basico)
    - Recupera uma pequena quantidade de vida.
    - Preparada com flores de bruxis, comuns nos arredores de Mondhrariel e perigosas nas maos erradas.
    - (20, 8.0, 0, 0)

- Frasco Rubro de Mondhrariel: (Avancado)
    - Recupera vida moderada e estabiliza sangramentos leves.
    - Ferreiros e combatentes da cidade levavam esse frasco preso ao cinto durante cercos prolongados.
    - (45, 7.0, 0, 0)

- Sangue de Aurora: (Raro)
    - Cura alta e concede uma breve regeneracao apos o consumo.
    - Batizada em homenagem a guerreira que devolveu a chama a um povo mergulhado em trevas.
    - (70, 6.0, 0, 3)

- Elixir do Guardiao: (Lendario)
    - Cura massiva e fortalece o portador por alguns instantes.
    - Formula rara associada a alquimistas que estudaram os resquicios da chama primordial.
    - (120, 5.0, 0, 4)

### Pocoes de Mana

- Destilado de Mitral: (Basico)
    - Recupera uma pequena quantidade de mana.
    - Feito com po mineral de cavernas energizadas por veios cristalinos.
    - (20, 9.0, 0, 0)

- Orvalho de Triuss: (Avancado)
    - Recupera mana e melhora o fluxo de conjuracao por alguns segundos.
    - Coletado ao amanhecer em vales onde a umidade parece nunca secar.
    - (45, 8.0, 0, 2)

- Lacrima de Manais: (Raro)
    - Grande restauracao de mana para combates longos.
    - Liquido azulado associado ao tear da vida e a ritos de preservacao do equilibrio.
    - (70, 7.0, 0, 0)

- Eclipse de Athiz: (Lendario)
    - Recupera muita mana e reduz temporariamente o custo de habilidades.
    - Mistura proibida entre essencias de Athiz e cristais de canalizacao profunda.
    - (110, 6.0, 0, 5)

### Pocoes de Reforco

- Casca de Bouros: (Basico)
    - Aumenta brevemente a resistencia fisica.
    - Po de rocha fina usado por oleiros em marchas de guerra.
    - (2, 12.0, 0, 4)

- Pulmao de Nazgarth: (Avancado)
    - Melhora a mobilidade e a resistencia a frio por curto periodo.
    - Muito usado por viajantes que cruzam as terras brancas do norte.
    - (4, 11.0, 0, 5)

- Resina de Carbais: (Raro)
    - Reforco agressivo que aumenta dano e defesa, mas exige timing preciso.
    - Extraida da mesma criatura cuja seiva alimenta amuletos de ataque.
    - (6, 10.0, 0, 6)

- Voto de Fhey: (Lendario)
    - Reforco temporal que acelera resposta, evasao e estabilidade por um curto intervalo.
    - Alquimistas descrevem essa pocao como uma trinca de segundos roubados do destino.
    - (8, 9.0, 0, 7)

## Cartas

Cartas sao focos de conjuracao, gatilhos de ritual ou consumiveis de magia selada. Algumas podem ser de uso unico, outras podem existir como chaves de puzzle ou grimorios fragmentados.

### Cartas de Conjuracao

- Carta do Empuxo Branco: (Basico)
    - Dispara uma onda curta de forca e empurra inimigos leves.
    - Inspirada nos circulos de impulso usados pelo Conjurador em batalha.
    - (2, 8.0, 2, 0)

- Carta do Oleiro: (Avancado)
    - Ergue estacas ou barreiras de terra em linha reta.
    - Versao simplificada das conjuracoes dos magos oleiros do Castelo Mamba.
    - (5, 10.0, 3, 2)

- Carta da Forja Liquida: (Raro)
    - Enfraquece armaduras, escudos metalicos e estruturas reforcadas.
    - Associada a estudos proibidos sobre a tecnica do Conjurador.
    - (7, 12.0, 4, 4)

- Carta dos Tres Circulos Rubros: (Lendario)
    - Carta ritualistica de altissimo risco, ligada a sangue, extincao de chama e invocacao.
    - Deve existir como item unico de narrativa, nao como drop comum.
    - (12, 20.0, 8, 6)

### Cartas de Leitura e Profecia

- Carta da Aurora: (Basico)
    - Revela mensagens ocultas, runas e pequenos segredos do ambiente.
    - Gravada com versos inspirados no poema da Aurora.
    - (1, 14.0, 1, 5)

- Carta do Corvo Regente: (Raro)
    - Destaca rastros de morte, presencas hostis e memoria residual de locais profanados.
    - Ravn seria uma das poucas entidades capazes de reconhecer a assinatura desse tipo de carta.
    - (4, 16.0, 3, 6)

- Carta de Fhey: (Lendario)
    - Suspende armadilhas temporais, revela ecos do passado e pode abrir portas ritualisticas.
    - Artefato raro para puzzles, santuarios e quests de memoria.
    - (6, 18.0, 4, 8)

## Itens Coletaveis

Itens coletaveis nao possuem uso direto imediato, mas alimentam economia, codex, crafting, trocas ou objetivos secundarios.

### Ingredientes e Materiais

- Flor de Bruxis: (Basico)
    - Ingrediente comum para infusoes, venenos leves e alquimia de suporte.
    - (99, 4, 1, 0)

- Fragmento de Aco Assiniano: (Raro)
    - Material raro de forja para armas, escudos e reliquias.
    - (25, 20, 4, 1)

- Fio de Windus: (Raro)
    - Fibra ritual ligada ao tear da vida e a costuras magicas.
    - (30, 18, 4, 1)

- Dente de Hogan: (Avancado)
    - Trofeu de criatura rara, usado em comercio e receitas agressivas.
    - (20, 16, 3, 0)

- Cinzas da Chama: (Lendario)
    - Residuo sagrado ou profanado das chamas primordiais.
    - (5, 50, 10, 1)

### Reliquias de Lore

- Pagina Rasgada de Irius: (Raro)
    - Fragmento de escritura proibida com pistas sobre magia e corrupcao.
    - (15, 22, 6, 1)

- Moeda de Galandhrar: (Basico)
    - Peça antiga encontrada em ruinas, usada como prova de origem e comercio.
    - (99, 3, 2, 0)

- Selo de Mondhrariel: (Avancado)
    - Insignia quebrada de casas militares e oficinas de guerra da cidade destruida.
    - (20, 12, 4, 1)

- Pena de Corvo: (Raro)
    - Marca de mau pressagio, destino e presenca regente.
    - (20, 15, 5, 1)

- Fragmento da Trombeta da Verdade: (Lendario)
    - Peça rara usada em linhas de quest e em santuarios ligados a Fhey.
    - (3, 40, 9, 1)

### Trofeus e Progresso

- Escama do Castelo Mamba: (Basico)
    - Fragmento retirado de armaduras ou estandartes das tropas de Serperus.
    - (99, 5, 1, 0)

- Lacre do Mao Divina: (Raro)
    - Prova de infiltracao em arquivos, templos ou caravanas da Igreja da Luz.
    - (10, 25, 6, 1)

- Miniatura da Chama: (Lendario)
    - Objeto ritualistico criado para culto, estudo ou fraude religiosa.
    - (5, 35, 7, 1)

- Runa de Milquedas: (Avancado)
    - Pedra inscrita usada para registrar caminhos, pontes e passagens escondidas.
    - (30, 10, 3, 1)

## Itens-chave e progressao futura

Esses itens ja existem no lore do mundo e podem entrar depois como `KeyItem` ou objetivos de quest:

- Lampada da Chama
- Candelabro de Fogo
- Pena de Aguia Abencoada
- Lamina dos Ceus
- Amuletos das Partes de Mhai
- Carta dos Tres Circulos Rubros

## Observacoes de design

- Itens ligados a chamas, sangue e Colossais devem ser raros e, de preferencia, vinculados a boss, quest ou santuario.
- Cartas ritualisticas nao devem competir com amuletos basicos como loot comum.
- Coletaveis de lore podem alimentar codex, trocas com NPCs, crafting ou desbloqueio de dialogos.
- Nomes reutilizam termos ja presentes no universo: Mhai, Fhey, Manais, Bouros, Windus, Mondhrariel, Galandhrar, Floris e Castelo Mamba.
