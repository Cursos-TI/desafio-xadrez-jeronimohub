#include <stdio.h>
// Declaração da recursividade
void moverBispo(int casas) {
   if (casas > 0) {
      printf("Baixo direita\n");
      moverBispo(casas - 1);
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
    printf("Movimento do cavalo:\n"); 
    int movimentodoC = 1; //controla o movimento em "L"
    int C; // C de cavalo
    
    while (movimentodoC--)
    {
      for (C = 0; C < 2; C++) {
         printf("Cima\n"); // Imprime "cima"
      }
         printf("Direita\n"); // Imprime direita
    } 
         printf("\n");

    
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.
     printf("2° Movimento do bispo:\n");
     moverBispo(5);


    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
