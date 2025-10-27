#include <stdio.h>

int main() {

    printf("Bem-vindo ao Jogo de Xadrez!\n\n");

    int peca, torre, bispo, rainha, cavalo;

    // Loop principal do jogo
    do {
        // Menu de opções
        printf("Escolha uma peça para movimentar:\n");
        printf("1 - Torre\n");
        printf("2 - Bispo\n");
        printf("3 - Rainha\n");
        printf("4 - Cavalo\n");
        printf("5 - Sair do jogo\n");
        printf("Sua escolha: ");
        scanf("%d", &peca);

        // =============================
        // TORRE → usando FOR
        // =============================
        if (peca == 1) {
            printf("\nPeça escolhida: Torre\n");
            for (torre = 1; torre <= 5; torre++) {
                printf("Movimenta a Torre para a %dª casa à direita\n", torre);
            }
            printf("\n");
        }

        // =============================
        // BISPO → usando WHILE
        // =============================
        else if (peca == 2) {
            printf("\nPeça escolhida: Bispo\n");
            bispo = 1;
            while (bispo <= 5) {
                printf("Movimenta o Bispo para a %dª casa na diagonal superior direita (Cima e Direita)\n", bispo);
                bispo++;
            }
            printf("\n");
        }

        // =============================
        // RAINHA → usando FOR
        // =============================
        else if (peca == 3) {
            printf("\nPeça escolhida: Rainha\n");
            for (rainha = 1; rainha <= 8; rainha++) {
                printf("Movimenta a Rainha para a %dª casa à esquerda\n", rainha);
            }
            printf("\n");
