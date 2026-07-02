# Mecanicas do Mundo

## Visão Geral

O mundo do jogo é um ambiente isométrico, contínuo e fluido, sem telas de carregamento entre áreas. O jogador pode explorar, enfrentar inimigos e completar missões em regiões distintas, cada uma com seus próprios desafios, recompensas e regras de acesso.

## Mundo Dinâmico

As ações do jogador devem alterar o estado do mundo. Derrotar chefes, completar eventos ou avançar na história pode desbloquear novas áreas, mudar a distribuição de inimigos e abrir rotas alternativas.

Elementos que afetam a jogabilidade:

- Clima: chuva, neve e tempestades.
- Ciclo dia/noite: inimigos noturnos e eventos diurnos.
- Eventos dinâmicos: invasões, festivais e missões temporárias.
- Interação com NPCs: missões, comércio e diálogos.
- Exploração: segredos, tesouros e áreas escondidas.
- Recompensas: loot, experiência e itens raros.
- Progressão: habilidades, novas regiões e evolução do personagem.

O mundo deve recompensar a curiosidade e a exploração, incentivando o jogador a descobrir rotas, atalhos, segredos e consequências.

## Regras de Acesso

O desbloqueio de conteúdo pode acontecer de três formas principais:

- Destravamento de áreas por chaves de acesso obtidas em missões ou chefes.
- Abertura de caminhos por ações específicas, como alavancas, quebra-cabeças ou objetivos narrativos.
- Eventos dinâmicos temporários que liberam áreas, recompensas ou rotas alternativas.

## Hierarquia do Mundo

O mundo é organizado em camadas:

- Mundo: o ambiente geral do jogo.
- Reino: grandes regiões com tema, desafios e identidade próprios.
- Região: subdivisão interna de um reino, com áreas, cidades e biomas.
- Área: espaço jogável com missões, chefes, inimigos e loot.
- Localidade: cidade, ruína, aldeia, fortaleza ou ponto de interesse.

```text
[MUNDO]
└── [REINO]
    ├── [REGIÕES]
    │   ├── [CIDADES E ÁREAS]
    │   └── [INIMIGOS E DESAFIOS]
    └── [BIOMAS]
```

## Biomas do Mundo

Os biomas definem aparência, inimigos, clima e desafios. Eles ajudam a orientar a exploração e a criar identidade para cada rota do mapa.

- Floris: floresta densa e vibrante, com criaturas místicas, plantas medicinais, rios cristalinos e cachoeiras escondidas. Conecta-se a Flurius, Vayenhir, Ririzas e Cárpado.
- Flurius: planícies abertas e ventosas, com grama alta e flores silvestres. Habitado por criaturas aladas e espíritos do vento. Conecta-se a Floris, Vayenhir, Ririzas e Cárpado.
- Flondai: floresta alta e escura, com árvores gigantescas e atmosfera misteriosa. Habitada por criaturas sombrias e espíritos antigos. Conecta-se a Vayenhir, Ririzas e Cárpado.
- Midus: planícies abertas e ventosas, com campos de grama alta e flores. Conecta-se a Flondai, Khawer e Altule.
- Khawer: deserto quente e árido, com dunas, cânions e oásis. Lar de criaturas adaptadas ao clima extremo.
- Altule: montanhas altas e nevadas, com picos imponentes e vales profundos. Habitada por criaturas resistentes ao frio e espíritos da montanha. Conecta-se a Midus e BlackStone.
- BlackFlours: planícies frias e geladas, com neve e gelo. Habitada por criaturas adaptadas ao frio extremo e espíritos do inverno. Conecta-se a Altule e BlackStone.
- BlackStone: planícies de grandes pedras, ligando Ariodus a Galandhrar e Vayenhir a Ririzas. Habitada por criaturas resistentes e espíritos da terra. Conecta-se a Altule, Midus, Ririzas e Vayenhir.

## Estrutura das Áreas

Cada área reúne objetivos diferentes, permitindo que o jogador avance de forma orgânica dentro do mesmo reino.

- Chefe: desbloqueia a próxima área, concede recompensas importantes e avança a história.
- Missões: tarefas principais e secundárias que guiam a progressão e aprofundam a narrativa.
- Sidequests: missões opcionais para ganhar itens, experiência, NPCs e histórias paralelas.
- Desafios: arenas, quebra-cabeças e eventos de tempo que testam habilidade e leitura do mapa.
- Inimigos: variedade de comportamentos e habilidades para manter o combate diverso.
- Loot: equipamentos, consumíveis e recursos que incentivam exploração e combate.

## Legenda de Mapa

```text
-> indica conexão com outra área ou reino
( ) indica o boss principal da área
[ ] indica o estado da área: aberta, semi-aberta ou fechada
@ item necessário para desbloqueio
* NPCs importantes para a história ou missões
```

## Áreas Exploráveis

### Reino Vayenhir - [Aberta]

Conexões principais: Cidade de Vayenhir, Ririzas e Cárpado.

- Floris - (Carbais Weeds) -> Milquedas.
- Flurius - (Lajur, a serpente gigante; Imaré, touro d'água) -> Milquedas.
- Mondrean - (Bohave esmagador, Dorus) -> Vayenhir, Ririzas e Cárpado.
- Mondhrariel -> Floris.
- Cidade de Vayenhir - (Zurus, o rei peixe; Arko, o ceifador; Halum; bruxa afogada) -> Vayenhir, Ririzas e Cárpado.
- Cidade de Baixo Vayenhir - [Aberta] - (Draugr, o Rei dos Mortos) -> Vayenhir, Ririzas e Floris.
- Ririzas - [Aberta] - (Driuss, o Afogado; Kraen, o Mago) -> Vayenhir, Cárpado, Cidade de Baixo Vayenhir e BlackStone.
- Midus - [Aberta] - (Arleon, o brilhante; Cavaleiro de prata; Rouls, o não nobre; Guerreiro de lata enferrujada).

### Serperius - [Fechada]

Requisitos: @ Pena de Águia abençoada ou @ Candelabro de Fogo.

- Império Naja - [Fechado] - (Cobaldorn, a serpente corrompida) -> via portal para Serperius.
- Castelo Mamba - [Fechado] - (Drax, Gonz, Dragão Mokun e Bomborgat, todos ao mesmo tempo).
- Dentro do Castelo Mamba - (Guillain, o Profanador de Monstros) -> BlackStone.
- Windus - (Agulha Negra) - *Manais* -> BlackStone.

### Regiões Ligadas por Progressão

- Harpun - ligado por Milquedas; boss: Põe, Conjurador de Demônios.
- Brius - ligado por Khawer; boss: Juhne.
- Crateras de Bourus - ligado por BlackStone; boss: Bourus e Folus.
- Collondra - a mais difícil; boss: Khay, Consumidor dos Mortos.
- Flondai - evento final ligado à reconciliação com Fhey, entrega dos amuletos das partes de Mhai e ativação da trombeta da verdade.

### Reino de Galandhrar - [Semi-Aberta]

Conexões principais: Cidade de Galandhrar, Archoz, Altis e Opirus.

Estado das localidades:

- Modus - destruída.
- Archoz - destruída.
- Midus - parcialmente destruída.
- Altis - destruída.
- Cidade Ghalandrar - núcleo principal.
- Opirus - parcialmente destruída.
- Ririzas - cidade relevante para rotas de progressão.
- Cárpado - cidade relevante para rotas de progressão.
- Mondrean - cidade ocupada e tomada.
- Mondhrariel - cidade destruída.
- Aldeia da tribo sul - assentamento periférico.
- Kijuris - localidade secundária.
- Vayenhir - núcleo de conexão regional.
- Odariz - localidade secundária.

### Dongondar - Reino dos Caprius

Tema: máquinas, força e batalha.

- Dongodar - parcialmente destruída.
- Caprionce - parcialmente destruída.
- Corneus - destruída.
- Mombeus - destruída.

### Laponis - Reino das Águias

- Laponis - destruída.
- Aênar.
- Petrius.
- Harpun.
- Carcamera.
- Montanha do Sussurro.

### Ódrin - Cidade Imperial dos Lordes, Reis e Imperadores

- Ódrin - parcialmente destruída.
- Odrun - parcialmente destruída.

### Serperus - Reino das Serpentes e Dragões

- Zariana.
- Castelo Mamba.
- Império Naja.
- Coralis.
- Alto do Fogo.
- Dragon Candle.

### Zilias - Reino dos Felinos

- Leondrah - reino de Razor e Éris.
- Panthar - reino de Zoris e Altus.
- Gathos.
- Kaplan.

Status geral: cidades inteiras.

### Urnos - Reino dos Ursos

- Canires.
- Aidor.
- Yenera.
- Porus.
- Urnos.

Status geral: cidades inteiras.

### Megaderan - Reino dos Lagartos

- Brius.
- LandDrangon.
- Iguinatu.

Status geral: cidades inteiras.

### Eriondo - Reino dos Equinos

- Alazus - inteira.
- Asinume - parcialmente destruída.
- Zebriu - destruída.
- Mulah - destruída.

### Ragmotriz - Reino dos Coelhos e Roedores

- Pakaz.

### Ariodus - Reino dos Aracnídeos

Status geral: inteira.

### Metaliz

Reino de Assina, colossal do aço derrubada por Mhai ao tentar impedir a derrama (Skyfall).

### Lavalus

Reino do Duke Zhao, vilão de Kaplan e da lenda de Eris.

### Windus

Reino da Imperatriz Manais, rainha do tear dos tecidos da vida, derrubada por Folus por se negar a voltar na trilha temporal e impedir os erros dos homens. Evento associado: Moonrise.

### Flondai

Reino coberto de florestas que dá acesso à área norte de Athiz. Associado ao Imperador Ludons, gigante criado por Fhey, colossal do tempo, para enraizar os mundos e ligar todas as vidas terrenas.

### Collondra

Reino montanhoso, inabitável para homens. É ocupado por gigantes de pedra e criaturas demoníacas que protegem o grande portão de pedra. Diz-se que existe uma cidade ali, mas não há habitantes. Peregrinos que foram até lá morreram petrificados, e as escrituras que carregavam contam a lenda do lugar.

### Marus

Ilha isolada no mar, provavelmente ligada à colossal Trius, que criou as nuvens e derramou o mar sobre as grandes profundezas. Todos que tentaram chegar até lá tiveram seus barcos naufragados.

### AlthoMondo

Reino suspenso quando Fhey foi derrubada por Mhai e Danrill. Ao cair, uma grande poeira cobriu o mundo; ela ergueu grandes quantidades de terra e as escondeu da visão dos colossais e seres impuros. Ainda continua sendo uma colossal.

### Cratan

Cratera gigante feita por Bouros, colossal que moldou o mundo e também foi derrubado por Mhai e Danrill. Ele abriu o mundo e entrou em suas entranhas, esperando o renascer para voltar à grande Kondranalisa e à separação entre colossais impuros e insípidos. Somente não humanos ou Szhais podem chegar ao local.