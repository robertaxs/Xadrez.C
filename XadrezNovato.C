#include <stdio.h>

int main() {
    int peca, casa;

    // -----------------------------
    // Escolha da peça
    // -----------------------------
    do {
        printf("Peça a ser escolhida:\n");
        printf("1 - Torre\n");
        printf("2 - Bispo\n");
        printf("3 - Rainha\n");
        printf("O programa não será iniciado até que seja enviado um número válido.\n");
        printf("Escolha a peça a ser movida: ");
        scanf("%d", &peca);
    } while (peca < 1 || peca > 3);

    // -----------------------------
    // TORRE
    // -----------------------------
    if (peca == 1) {
        printf("\nPeça escolhida: Torre\n");

        do {
            printf("Casas a serem andadas para a direita (1 a 5): ");
            scanf("%d", &casa);
        } while (casa < 1 || casa > 5);

        printf("A Torre vai andar %d casas para a direita.\n\n", casa);

        // Movimento com DO-WHILE
        int i = 0;
        do {
            printf("Casa %d: Direita\n", i + 1);
            i++;
        } while (i < casa);
    }

    // -----------------------------
    // BISPO
    // -----------------------------
    else if (peca == 2) {
        printf("\nPeça escolhida: Bispo\n");

        do {
            printf("Casas a serem andadas para cima e à direita (1 a 5): ");
            scanf("%d", &casa);
        } while (casa < 1 || casa > 5);

        printf("O Bispo vai andar %d casas na diagonal (Cima e Direita).\n\n", casa);

        // Movimento com WHILE
        int i = 0;
        while (i < casa) {
            printf("Casa %d: Cima e Direita\n", i + 1);
            i++;
        }
    }

    // -----------------------------
    // RAINHA
    // -----------------------------
    else {
        printf("\nPeça escolhida: Rainha\n");

        do {
            printf("Casas a serem andadas para a esquerda (1 a 8): ");
            scanf("%d", &casa);
        } while (casa < 1 || casa > 8);

        printf("A Rainha vai andar %d casas para a esquerda.\n\n", casa);

        // Movimento com FOR
        for (int i = 1; i <= casa; i++) {
            printf("Casa %d: Esquerda\n", i);
        }
    }

    printf("\nFim da simulação de movimentos.\n");
    return 0;
}
