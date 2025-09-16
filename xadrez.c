/*
  Nível Mestre — Criando Movimentos Complexos (Xadrez)
  - Torre, Bispo e Rainha por recursão
  - Cavalo com loops aninhados (uso de continue e break)
  - Bispo também com loops aninhados (externo = vertical, interno = horizontal)
  - Direções: "Cima", "Baixo", "Esquerda", "Direita"
*/

#include <stdio.h>

/* =========================
   Funções recursivas
   ========================= */

/* Torre: move 'passos' vezes para Direita */
void torre_direita_rec(int passos) {
    if (passos <= 0) return;     /* caso-base */
    printf("Direita\n");
    torre_direita_rec(passos - 1);
}

/* Bispo (diagonal Cima-Direita): a cada passo imprime Cima e Direita */
void bispo_cima_direita_rec(int passos) {
    if (passos <= 0) return;
    printf("Cima\n");
    printf("Direita\n");
    bispo_cima_direita_rec(passos - 1);
}

/* Rainha: move 'passos' vezes para a Esquerda */
void rainha_esquerda_rec(int passos) {
    if (passos <= 0) return;
    printf("Esquerda\n");
    rainha_esquerda_rec(passos - 1);
}

/* =========================
   Cavalo — loops aninhados “complexos”
   =========================
   Cada movimento do cavalo em “L” = 2× Cima + 1× Direita.
   - for externo: repete quantos “L” você quer
   - while interno: executa os 3 passos controlando variáveis
   - usa continue/break para mostrar domínio do fluxo
*/
void cavalo_L_loops(int repeticoes_L) {
    for (int m = 0; m < repeticoes_L; m++) {     /* um “L” por iteração */
        int up = 0, right = 0;

        while (1) {  /* laço controlado manualmente */
            if (up < 2) {
                printf("Cima\n");
                up++;
                continue;            /* volta para garantir 2x Cima antes de Direita */
            }
            if (right < 1) {
                printf("Direita\n");
                right++;
                /* após 2x Cima e 1x Direita, encerramos este “L” */
            }
            /* condição de saída explícita */
            if (up >= 2 && right >= 1) break;
        }
    }
}

/* =========================
   Bispo — loops aninhados
   =========================
   Externo: vertical (Cima 1x por passo).
   Interno: horizontal (Direita 1x por passo).
*/
void bispo_cima_direita_loops(int passos) {
    for (int v = 0; v < passos; v++) {
        printf("Cima\n");          /* movimento vertical */
        for (int h = 0; h < 1; h++) {
            printf("Direita\n");   /* movimento horizontal */
        }
    }
}

int main(void) {
    /* Parâmetros (definidos no código) */
    const int passos_torre   = 5;  /* Torre: 5 Direita */
    const int passos_bispo   = 5;  /* Bispo: 5 diagonais Cima-Direita */
    const int passos_rainha  = 8;  /* Rainha: 8 Esquerda */
    const int repeticoes_L   = 3;  /* Cavalo: quantos “L” executar */

    /* -------- TORRE (recursão) -------- */
    printf("Movimento da Torre (recursao):\n");
    torre_direita_rec(passos_torre);
    printf("\n");

    /* -------- BISPO (recursão) -------- */
    printf("Movimento do Bispo (recursao - diagonal Cima/Direita):\n");
    bispo_cima_direita_rec(passos_bispo);
    printf("\n");

    /* -------- RAINHA (recursão) -------- */
    printf("Movimento da Rainha (recursao):\n");
    rainha_esquerda_rec(passos_rainha);
    printf("\n");

    /* -------- CAVALO (loops aninhados complexos) -------- */
    printf("Movimento do Cavalo (loops aninhados - L: 2x Cima + 1x Direita):\n");
    cavalo_L_loops(repeticoes_L);
    printf("\n");

    /* -------- BISPO (loops aninhados) -------- */
    printf("Movimento do Bispo (loops aninhados - externo=vertical, interno=horizontal):\n");
    bispo_cima_direita_loops(passos_bispo);

    return 0;
}
