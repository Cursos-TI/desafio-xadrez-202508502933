/*
  Desafio – Nível Novato: Movimentando as Peças do Xadrez
  Objetivo: simular os movimentos de Torre, Bispo e Rainha usando for, while e do-while.
  As quantidades de casas são definidas no código (sem entrada do usuário).
*/

#include <stdio.h>

int main(void) {
    /* Quantidade de casas para cada peça */
    const int passos_torre  = 5;  /* Torre: 5 para a Direita */
    const int passos_bispo  = 5;  /* Bispo: 5 na diagonal Cima Direita */
    const int passos_rainha = 8;  /* Rainha: 8 para a Esquerda */

    /* -------- TORRE (for) -------- */
    printf("Movimento da Torre (for):\n");
    for (int i = 0; i < passos_torre; i++) {
        printf("Direita\n");
    }

    /* -------- BISPO (while) -------- */
    printf("\nMovimento do Bispo (while):\n");
    int j = 0;
    while (j < passos_bispo) {
        printf("Cima Direita\n");  /* diagonal */
        j++;
    }

    /* -------- RAINHA (do-while) -------- */
    printf("\nMovimento da Rainha (do-while):\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < passos_rainha);

    return 0;
}
