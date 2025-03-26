#include <stdio.h>

void mover_torre(int vezes) {
    if (vezes == 0) {
        return;
    }
    
    printf("Direita\n");
    mover_torre(vezes - 1);
}

int main() {
    mover_torre(5);
    return 0;
}