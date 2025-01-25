#include <stdio.h>

int main() {
   // Definições de constantes para os movimentos
const int PEAO_MOVIMENTO[2] = {0, 1};     // Movimento do peão: (x, y)
const int CAVALO_MOVIMENTOS[8][2] = {     // Movimentos possíveis do cavalo
    {2, 1}, {2, -1}, {-2, 1}, {-2, -1},
    {1, 2}, {1, -2}, {-1, 2}, {-1, -2}
};
const int TORRE_MOVIMENTO[4][2] = {       // Movimento da torre (direções)
    {1, 0}, {-1, 0}, {0, 1}, {0, -1}
};
const int BISPO_MOVIMENTO[4][2] = {       // Movimento do bispo (diagonais)
    {1, 1}, {1, -1}, {-1, 1}, {-1, -1}
};
const int RAINHA_MOVIMENTO[8][2] = {      // Combinação de torre e bispo
    {1, 0}, {-1, 0}, {0, 1}, {0, -1},
    {1, 1}, {1, -1}, {-1, 1}, {-1, -1}
};
    // Exemplo: imprimir os movimentos possíveis do cavalo
    printf("Movimentos do Cavalo:\n");
    for (int i = 0; i < 8; i++) {
        printf("(%d, %d)\n", CAVALO_MOVIMENTOS[i][0], CAVALO_MOVIMENTOS[i][1]);
    }
    return 0;
}
