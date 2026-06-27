## Gideon Crawler — Game Driven Development (GDD)

## Enredo

Gideon é um ladino que foi capturado, condenado e enviado a dungeon de Northrean para cumprir sua pena. Preso em sua cela, de repente um portal se abre e um personagem destranca sua cela. Agora Gideon precisa explorar a dungeon, resolver enigmas e sobreviver aos perigos para encontrar uma saída e descobrir quem o libertou e por quê.

## Conceito central

Gideon Crawler é um jogo de exploração em dungeon com o objetivo de sair da masmorra.
Exploração + puzzles + progressão por salas + atmosfera sombria

## Finais

Gema de Archilion: Pedra branca brilhante: Pedra Importante na Lore do jogo
Gema Wyvern: Pedra azul brilhante: Pedra importante que pode ser usada pra tocar pela gema de Archilion para desbloquear o final bom do jogo

São 3 Finais possíveis:

Final 1: Ao pegar a chave final, Gideon descobre que o personagem que o libertou é um traidora ela rouba a pedra Magica de Gideon e o foge. (Final ruim)
Final 2: Para fazer o final 2 Gideon precisa trocar a pedra magica por uma Gema e guardar no bau, ao pegar a chave final ele descobre que o personagem que o libertou é um traidor e ele rouba a Gema de Gideon e foge, Gideon recupera a pedra magica e foge da dungeon. (Final bom)
Final 3: Gideon não encontra a pedra Magica, mas descobre que a pessoa que o libertou é um traidor e foge da dungeon. (Final neutro)


## Estilo de jogo recomendado

Top-down 2D dungeon crawler

Cada sala é um desafio único, com puzzles, inimigos e itens. O jogador deve explorar, interagir e resolver problemas para avançar.
A progressão envolve exploração, coleta de itens e resolução de puzzles, com combate sendo secundário. Derrotar o boss da sala que contém a chave para a próxima sala é uma boa mecânica, mas não deve ser o foco principal.

## Loop principal de gameplay

O ciclo básico deve ser:

Explorar ambiente
↓
Identificar obstáculo
↓
Resolver puzzle ou enfrentar perigo
↓
Abrir passagem / coletar item
↓
Avançar para novo ambiente
↓
Encontrar novo desafio

Esse loop precisa ser repetível e simples.

## Regras fundamentais

### Movimento

O personagem pode:

mover em 4 direções;
interagir com objetos próximos;
empurrar certos blocos;
pegar itens;
ativar alavancas;
abrir portas.
atravessar portais  do Ponto A para o Ponto B ( ex: ambiente 1 para ambiente 2) portais no mesmo nivel, é permitido portais nos mesmo ambientes.


### Câmera

A camera segue o personagem porem algumas caracteristicas importantes:
a camera deve mostrar 11x6 Blocos de 16x16 pixels totalizando 176x96 pixels, isso é importante para o design de salas e puzzles.
A camera deve ser fixa, ou seja, não deve se mover suavemente, mas sim "teletransportar" para a nova posição quando o jogador se mover para uma nova sala. Isso ajuda a criar uma sensação de transição clara entre as salas e evita distrações visuais.

- cada ambiante onde o personagem entrar deve mostrar os objetos e inimigos e ao sair esconder os objetos e inimigos,

### Mecânicas principais
Interação

Todo objeto interativo deve seguir uma regra comum:

Jogador aproxima
↓
Aperta botão de interação
↓
Objeto executa ação

Exemplos:

alavanca/botoes: ativam/desativam mecanismos, puzzles ou armadilhas, abrem pontes;
baú: entrega item, guarda itens;
estátua: move para localização e ativa partes do cenario, revelam pista, abrem caminhos;
pedestal: aceita artefato.
Portas: se estiverem fechadas, abrem iventario para usar chave ou item especial. Se estiverem abertas, permitem passagem.
Janelas: revelam conversas, pistas ou itens, mas não permitem passagem.

Tipos básicos:

Tipo - Regra
Porta comum	abre por interação
Porta trancada	exige chave - Bau, inimigo ou puzzle
Porta mecânica	abre com puzzle
Porta mágica	exige item especial - Bau, ou puzzle

Portas dos niveis:
Chaves guardadas com os chefes:
Portas 
Chaves

Tipos:

chave simples;
chave de sala;
chave de nivel;
Selo especial;
fragmento de artefato.

Evite muitas chaves no começo. Para o protótipo, use apenas:

Chave comum
Selo de dungeon

## Tipos de puzzle

Puzzle de pressão

O jogador pisa em botão ou coloca bloco sobre botão.

Puzzle de blocos

O jogador empurra blocos para posições corretas.

Puzzle de sequência

O jogador ativa símbolos/alavancas em ordem correta.

Puzzle de luz

O jogador gira espelhos, cristais ou tochas para ativar mecanismos.

Puzzle de memória

O jogador observa uma pista em uma sala e aplica em outra.

Para o primeiro protótipo, use apenas:

Botão + bloco
Alavanca + porta
Sequência de símbolos

## Items

- Chaves: usadas para abrir portas trancadas.
- Gemstone: item especial para a historia (So existem 2 Whitegem e Esmerald Gem).
- Potions: itens consumíveis que restauram vida e mana.
- Artefato: item especial usado para colocar em pedestais e ativar mecanismos.
- Selo: item especial usado para abrir portas mágicas ou ativar mecanismos (Sempre mais de 1).
- Baús: contêiner que fornecem items ou para guardar itens, pode ser trancado ou aberto.
- Amuletos: Items que liberam as habilidades do personagem, como ataque e defesa (sem amuletos, o personagem não consegue atacar ou defender).

## Combate

O combate não deve ser o foco inicial.

Recomendação:

poucos inimigos;
inimigos simples;
combate leve;
perigo ambiental mais importante que ação.

Mecânicas iniciais:

Ataque corpo a corpo
Dano ao tocar inimigo
Vida do jogador
Morte e respawn nos pontos de checkpoint ou locais de salvamento.

## Vida, Mana, XP e Morte

### Vida (HP)
A vida do jogador é representada por pontos de vida, que podem ser perdidos ao receber dano de inimigos ou armadilhas. O jogador começa com:

- 3 Pontos de vidas na primeira Run
- Ao receber dano o jogador o jogador fica 2 segundos invulnerável, piscando para indicar que está em estado de invulnerabilidade.

### Mana (MP)
Quando equipado com Amuletos, o jogador pode usar mana para atacar ou defender:

- 5 Pontos de mana na primeira Run
- Cada ataque ou defesa consome 1 ponto de mana, mana regenera com o tempo (padrao 1 ponto por 5 segundos).

### XP (Experiência)

- O jogador ganha pontos de experiência ao derrotar inimigos ou completar desafios. A experiência acumulada pode ser usada para aumentar HP ou MP e diminuir o tempo de regeneração de mana. A cada nível, o jogador pode escolher entre aumentar HP ou MP ou RM.

### Morte

Ao morrer:
volta para o ultimo checkpoint ou ponto de salvamento

## Progressão

A dungeon deve ser dividida em:

Salas
Setores
Andares
Boss/Puzzle final

Estrutura inicial:

Entrada
↓
Sala tutorial
↓
Sala com chave
↓
Sala com puzzle de bloco
↓
Sala com inimigo simples
↓
Sala com sequência de alavancas
↓
Sala final com selo

## Estrutura técnica Inicial na Unreal Engine

Nós principais
    Main
    ├── BP
        ├── Player
            ├── Master: Blueprint do jogador, Gamemode, HUD, GameController
            ├── Child: Blueprint do jogador, Variações de jogador
            ├── Enemy: Blueprint do inimigo, Variações de inimigos e Bosses
            ├── Struct: Estruturas de dados para portas, chaves, puzzles, inimigos
            ├── Interface: Interfaces para interação entre objetos
            ├── UI: Widgets de UI para vida, inventário, mensagens
            ├── Enums: Enumerações para tipos de portas, chaves, puzzles
            └── Input: Inputs do jogador, mapeamento de teclas e ações
        ├── GameProps: 
            ├── Doors
                ├── Jails
                └── Doors 
            ├── Environments
            ├── Portals
            ├── Interactables
            └── Items
    ├── Levels
    │   ├── Menus
    │   ├── Extras
    │   ├── Levels
            └── Level 1 - Inicio
            ...
    │   └── Testing
    ├── Textures
        └── Characters
            └── Gideon: Texturas do personagem principal
                ...
    ├── Flipbooks
        └── Characters
            └── Gideon: Animations do personagem principal
                ...
        └── Enemies: Animations dos inimigos
            ...
    ├── Tilemaps
    └── GameManager
        ├── GameState
        └── GameInstance



## Sistemas mínimos para o protótipo

O primeiro protótipo precisa ter somente:

Movimento do jogador
Colisão
Interação
Porta
Chave
Alavanca
Botão de pressão
Bloco empurrável
Uma sala com puzzle
Uma sala com inimigo
Transição entre salas
UI de vida

Isso já prova o núcleo do jogo.

12. Decisões de design iniciais
Elemento	Decisão
Perspectiva	Top-down 2D
Engine	Unreal Engine 5
Arte	Pixel art dark fantasy
Tile size	16x16 ou 32x32
Gameplay	Exploração + puzzle
Combate	Secundário
Progressão	Salas interligadas
Salvamento	Entre salas ou checkpoints
Escopo inicial	Uma dungeon pequena
13. Regra de ouro do projeto

Cada sala deve ter uma ideia principal.

Exemplo:

Sala 1: 
    1.1 ensinar movimento
    1.2 ensinar combate simples
    1.3 ensinar interação com porta
Sala 2: 
    2.1 ensinar alavanca
    2.2 ensinar botão de pressão
    2.3 ensinar empurrar bloco
    2.4 ensinar puzzle simples
    2.5 ensinar combinar puzzle + porta
Sala 3: 
    3.1 ensinar interação com baú
    3.2 ensinar bau com chave
    3.3 ensinar bau com puzzle
    3.4 ensinar bau com com troca de item 
    3.5 ensinar mecanica de portais A-B
Sala 4: 
    4.1 ensinar uso coletar selo (item especial)
    4.2 ensinar uso de selo em pedestal
    4.3 ensinar uso de selo em puzzle
    4.4 ensinar uso de selo em porta
Sala 5:
    5.1 puzzle de sequência de alavancas
    5.2 puzzle de sequência de símbolos
    5.3 puzzle de sequência de botões
    5.4 puzzle de sequência de blocos
    5.5 puzzle de sequencia de selos
    5.6 combate com inimigo e uso de cenario (ex: armadilha, alavanca, botão)

sala de 1-4 introduz mecanicas e sala 5 combina mecânicas e introduz combate.

14. MVP recomendado

O MVP de Gideon Crawler deve ser:

Uma dungeon com 5 salas
1 personagem jogável
1 tipo de inimigo
1 sistema de chave
2 tipos de puzzle
1 objetivo final
1 tela de vitória

Esse é o ponto ideal para começar sem inflar o projeto.