
#include <stdio.h>
// Declaração da recursividade
// Bispo 
void moverBispo(int casas) {
   if (casas > 0) {
      printf("Baixo direita\n");
      moverBispo(casas - 1);
   }
}
// Torre
void moverTorre(int casas) {
   if (casas > 0) {
      printf("Cima\n");
      moverTorre(casas - 1);
   }
}

// Rainha
void moverRainha(int casas) {
   if (casas > 0) {
      printf("Direita\n");
      moverRainha(casas - 1);
   }
}

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main(){
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    int b = 1, t = 1, r; // b de bispo, t de torre e r de rainha

    // Menu interativo
    printf("*** Jogo de tabuleiro de xadrez *** \n");
    printf("Iniciando jogo...\n\n");
    
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal (5 casas na diagonal superior direita).
    printf("Movimento do bispo:\n");
    
    while (b <= 5)
    {
       printf("Cima direita\n");
       b++;  
    }
       printf("\n");

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita (5 casas para a direita).
    printf("Movimento da torre:\n");

    do
    {
       printf("Direita\n");
       t++;
    } while (t <= 5);
       printf("\n");
    
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda (Rainha: 8 casas para a esquerda).
    printf("Movimento da rainha:\n");

    for (r = 1; r <= 8; r++)
    {
       printf("Esquerda\n");
    }
       printf("\n");
    
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    

    
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.
    // Bispo
     printf("2° Movimento do bispo:\n");
     moverBispo(5);
     printf("\n");

    // Torre
     printf("2° Movimento da torre:\n");
     moverTorre(5);
     printf("\n");

    // Rainha
     printf("2° Movimento da rainha:\n");
     moverRainha(8);
     printf("\n");


    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    // Movimento do cavalo com loops aninhados, continue e break.
    printf("Movimento do cavalo com loops complexos:\n");
    
    for(int i = 0; i < 2; i++) {
       for (int j = 0; j < 2; j++) {
      if (i == 1 && j == 1) {
         continue; // Pula a iteração quando i e j são ambos iguais a 1
      }
      printf("Cima\n"); // Imprime "cima"
   }
       printf("Direita\n"); // Imprime "direita"
         break; // Encerra o loop externo após a primeira iteração
}

         printf("\n");
    return 0;
}