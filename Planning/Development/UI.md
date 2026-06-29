Método 2: Renderizar UI para uma Textura (Render Target)
Se você precisa que a UI apareça em uma tela de computador dentro do jogo ou em um material específico.

1. Ativos Necessários:

Um Canvas Render Target 2D.
Um Material configurado com o Render Target como Texture Sample.
2. Lógica de Renderização (Blueprint): Você usará a função DrawWidgetToTarget.

Crie uma variável do tipo User Widget e instancie seu widget (Create Widget).
No Event Tick ou em um Timer:
Use o nó Draw Widget to Target.
Target: Seu Canvas Render Target 2D.
Widget to Draw: Sua variável de widget.
Delta Time: Get World Delta Seconds.
Método 3: Retainer Box (Para Efeitos de Post-Process na UI)
Se o objetivo é aplicar distorções ou efeitos de textura diretamente no viewport da UI 2D comum:

Abra seu Widget Blueprint.
Envolva toda a sua hierarquia (o nó raiz) com um Retainer Box.
No Retainer Box, você pode atribuir um Effect Material.
O Unreal renderizará o conteúdo do Retainer Box para uma textura interna antes de aplicar o material e exibir na tela.
Interação (Input)
Para interagir com widgets que estão no mundo 3D ou em texturas, você deve usar o Widget Interaction Component:

Adicione o Widget Interaction Component ao seu Player Character.
Configure o Interaction Source para Camera ou Mouse.
Use os nós Press Pointer Key (simulando Left Mouse Button) quando o jogador clicar.
Isso permite que o Unreal projete o clique da tela para a posição 3D do widget.
Melhores Práticas e Performance
Elimine o Redraw desnecessário: Se a UI for estática, não use o Draw Widget to Target no Tick. Renderize apenas quando houver mudanças.
Transparência: Se usar o Método 1, configure o Blend Mode do componente Widget para Transparent ou Masked no painel de detalhes.
Otimização: Em widgets 3D, desative o “Tick” do widget se ele for puramente informativo e não tiver animações complexas.
Qual destes métodos melhor atende ao seu design de jogo atual? Se precisar de ajuda com a lógica de eliminação de elementos da interface via C++, posso fornecer os headers necessários.