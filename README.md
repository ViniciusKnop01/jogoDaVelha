# jogoDaVelha
Este repositório será utilizado para armazenar um projeto em C++: "Jogo da Velha".

## Visão Geral
Este projeto faz parte de um [desafio](https://neps.academy/br/project/22) de um curso de programação da [Neps Academy](https://neps.academy/br/login).

Este é um jogo para dois jogadores, para ser jogado no terminal, no qual os participantes se revezam marcando posições em uma grade 3x3 até que um deles vença ou ocorra um empate.

## Como jogar
1. O Jogador 1 usa "X" e o Jogador 2 usa "O".
2. Os jogadores se revezam escolhendo uma célula vazia no tabuleiro.
3. O jogo termina quando um jogador alinha três símbolos ou quando todas as células são preenchidas sem que haja um vencedor.

## Como eu fiz?


### Problemas e Soluções

1. **Exibir o Tabuleiro**  
   - **Solução**: Achei mais fácil exibir o tabuleiro como uma matriz 3x3 e criar uma função para mostrar a versão atualizada (com as jogadas feitas). Foi difícil encontrar o formato exato, mas no final conseguimos chegar a uma boa solução:

   ```cpp
   void exibirTabuleiro (char matriz[3][3]) {
       for (int i = 0; i < 3; i++) {
           for (int j = 0; j < 3; j++) {
               if (j == 2) cout << " " << matriz[i][j] << " ";
               else { 
                   cout << " " << matriz[i][j] << " " << "|";
               }
           }

           if (i != 2) {
               cout << endl;
               cout << "-----------" << endl;
           }
       }
   }


2. **Verificação de Vitória**  
   - **Problema**: Como determinar se um jogador venceu o jogo.  
   - **Solução**: A função `verificarVitoria` é responsável por identificar se um jogador venceu a partida. Ela verifica todas as linhas, colunas e diagonais do tabuleiro para encontrar três símbolos iguais em sequência. Se uma condição de vitória for atendida, a função retorna verdadeiro; caso contrário, retorna falso.

3. **Verificação de Empate**  
   - **Problema**: Como detectar quando o jogo termina em empate.  
   - **Solução**: A função `verificarEmpate` conta as células preenchidas na matriz. Se todas as células estiverem preenchidas e nenhum vencedor for encontrado, ela declara um empate.

5. **Loop do Jogo e Reinício**  
   - **Problema**: Como gerenciar o fluxo do jogo, incluindo as jogadas e o reinício do jogo.  
   - **Solução**: A função `main` controla o loop do jogo, alternando os turnos entre os jogadores, verificando se houve vitória ou empate, e reiniciando o tabuleiro se os jogadores optarem por jogar novamente.

---

### Visão Geral das Funções

#### `exibirTabuleiro(char matriz[3][3])`
Exibe o estado atual do tabuleiro no formato de grade.

#### `verificarVitoria(char matriz[3][3])`
Verifica se algum jogador venceu analisando linhas, colunas e diagonais. Informa o vencedor se uma condição de vitória for atendida.

#### `verificarEmpate(char matriz[3][3])`
Determina se o jogo terminou em empate ao verificar se todas as células estão preenchidas e nenhum vencedor foi encontrado.

#### `validarJogada(int entrada, char matriz[3][3])`
Valida a jogada do jogador para garantir que está dentro dos limites e que a célula escolhida não está ocupada.

#### `main()`
Gerencia o loop principal do jogo, alterna os turnos entre os jogadores, verifica por vitória ou empate e lida com o reinício da partida.

---

