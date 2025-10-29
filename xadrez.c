#include <stdio.h>

// ------------------ FUNÇÕES RECURSIVAS ------------------

// Função recursiva para mover a Torre
void moverTorre(int casas) {
    if (casas == 0) return; // condição de parada da recursão
    printf("Direita\n"); // imprime o movimento
    moverTorre(casas - 1); // chamada recursiva diminuindo uma casa
}

// Função recursiva para mover a Rainha
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Função recursiva para mover o Bispo usando loops aninhados
void moverBispo(int casasVertical, int casasHorizontal) {
    if (casasVertical == 0) return; // condição de parada da recursão
    // Loop interno para o movimento horizontal
    for (int i = 0; i < casasHorizontal; i++) {
        printf("Cima, Direita\n");
    }
    moverBispo(casasVertical - 1, casasHorizontal); // chamada recursiva para o próximo movimento vertical
}

// ------------------ FUNÇÃO PRINCIPAL ------------------
int main() {

    // ------------------ TORRE ------------------
    printf("=== Movimento da Torre ===\n");
    int casasTorre = 5;
    moverTorre(casasTorre); // chama a função recursiva da Torre

    // ------------------ BISPO ------------------
    printf("\n=== Movimento do Bispo ===\n");
    int casasBispoVertical = 5;
    int casasBispoHorizontal = 1; 
    moverBispo(casasBispoVertical, casasBispoHorizontal); // chama a função recursiva do Bispo

    // ------------------ RAINHA ------------------
    printf("\n=== Movimento da Rainha ===\n");
    int casasRainha = 8;
    moverRainha(casasRainha); // chama a função recursiva da Rainha

    // ------------------ CAVALO ------------------
    printf("\n=== Movimento do Cavalo ===\n");

    int movimentosCavaloVertical = 2;  // casas para cima
    int movimentosCavaloHorizontal = 1; // casas para a direita

    // Loop externo: controla o movimento horizontal
    for (int h = 0; h < movimentosCavaloHorizontal; h++) {
        int v = 0; // contador de casas verticais
        while (v < movimentosCavaloVertical) {
            printf("Cima (%d)\n", v + 1);
            v++;
            if (v == 1) continue; // exemplo de continue, pula para a próxima iteração
        }
        printf("Direita (%d)\n", h + 1);
        break; // encerra o loop externo após completar o movimento em "L"
    }

    return 0;
}
