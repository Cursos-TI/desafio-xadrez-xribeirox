#include <stdio.h>

//CHAMADAS RECURSIVO
//torre recursive
void movertorre(int vezes) {
    if (vezes == 0) {
        return;
    }
    printf("Direita\n");
    movertorre(vezes - 1);
}

//bispo recursive
void imprimirdireita(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        imprimirdireita(casas - 1);
    }
}

//rainha recursive
void moverrainha(int vezes) {
    if (vezes == 0) {
        return;
    }
    printf("Esquerda\n");
    moverrainha(vezes - 1);
}

//FIM DOS VOIDS

int main() {
    //Torre (5 casas para a direita) - for
    printf("Movimento da Torre:\n");
    movertorre(5);

    //Bispo (5 casas na diagonal para cima e direita) - loop while
    printf("\nMovimento do Bispo:\n");
    for (int i = 0; i < 5; i++) {
        printf("Cima, ");
        imprimirdireita(1);
    }

    //Rainha (8 casas para a esquerda) - loop do-while
    printf("\nMovimento da Rainha:\n");
    moverrainha(8);

    //CAVALO  (2 casas pra cima e 1 direita) - aninhado
    printf("\n Movimento do Cavalo:\n");

    for (int i = 0; i < 5; i++) {  // Loop externo (5 vezes)
        
        for (int j = 0; j < 2; j++) {  // Loop interno (duas repetições para "Cima")
            printf("Cima, ");
            
            if (j == 1) {  // Após duas subidas, o cavalo move para a direita
                printf("Direita\n");
                break;
            }
        }
    }
    return 0;
}

