#include <stdio.h>

int main() {

    // ------------------ TORRE ------------------
    // A torre se move em linha reta (horizontal ou vertical)
    // ela se moverá 5 casas para a direita
    printf("=== Movimento da Torre ===\n");

    int i; 
    for (i = 1; i <= 5; i++) {
        printf("Direita (%d)\n", i);
    }

    // ------------------ BISPO ------------------
    // O bispo se move na diagonal
    // ele se moverá 5 casas para cima e para a direita
    printf("\n=== Movimento do Bispo ===\n");

    int contador = 1; 
    while (contador <= 5) {
        printf("Cima, Direita (%d)\n", contador);
        contador++;
    }

    // ------------------ RAINHA ------------------
    // A rainha pode se mover em todas as direções
    // ela se moverá 8 casas para a esquerda
    printf("\n=== Movimento da Rainha ===\n");

    int j = 1; 
    do {
        printf("Esquerda (%d)\n", j);
        j++;
    } while (j <= 8);

    return 0;
}
