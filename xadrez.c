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

      /* -------- CAVALO (loops aninhados) -------- */
    printf("\nMovimento do Cavalo (loops aninhados):\n");

    const int movimentos_cavalo = 1; /* quantos "L" quer simular */
    const int passos_baixo = 2;       /* 2 casas para baixo */
    const int passos_esquerda = 1;    /* 1 casa para esquerda */

    /* for externo = cada "L" do cavalo */
    for (int mov = 0; mov < movimentos_cavalo; mov++) {
        /* for interno = 2 passos para baixo */
        for (int i = 0; i < passos_baixo; i++) {
            printf("Baixo\n");
        }

        /* while interno = 1 passo para esquerda */
        int j2 = 0;
        while (j2 < passos_esquerda) {
            printf("Esquerda\n");
            j2++;
        }
    }
  
    return 0;
}
