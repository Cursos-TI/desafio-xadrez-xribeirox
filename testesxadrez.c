#include <stdio.h>

int main() {
    //Torre (5 casas para a direita) - for
    printf("Movimento da Torre:\n");
    for (int t = 0; t < 5; t++) {
        printf("Direita\n");
    }

    //Bispo (5 casas na diagonal para cima e direita) - loop while
    printf("\nMovimento do Bispo:\n");
    int b = 0;
    while (b < 5) {
        printf("Cima Direita\n");
        b++;
    }

    //Rainha (8 casas para a esquerda) - loop do-while
    printf("\nMovimento da Rainha:\n");
    int r = 0;
    do {
        printf("Esquerda\n");
        r++;
    } while (r < 8);

    //CAVALO  (2 casas pra baixo e 1 esquerda) - aninhado
    printf("\n Movimento do Cavalo:\n");

    for (int he = 0; he < 1; he++) {
        
        int hb = 0;
        while (hb < 2) {
            printf("Baixo\n");
            hb++;
        }

        printf("Esquerda\n");
    }

    return 0;
}

