#include <stdio.h>

#define TAMANHO 5

// Função para exibir o tabuleiro na tela
void exibirTabuleiro(int tabuleiro[TAMANHO][TAMANHO]) {
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

int main() {
    // Inicializa o tabuleiro 5x5 com zeros (0 = sem navio)
    int tabuleiro[TAMANHO][TAMANHO] = {0};
    
    // Posicionamento do navio vertical de tamanho 3
    int x1 = 1, y1 = 2; // Ponto inicial do navio vertical
    for (int i = 0; i < 3; i++) {
        tabuleiro[x1 + i][y1] = 3; // Marca as posições do navio com '3'
        printf("Navio vertical: (%d, %d)\n", x1 + i, y1);
    }
    
    // Posicionamento do navio horizontal de tamanho 3
    int x2 = 3, y2 = 0; // Ponto inicial do navio horizontal
    for (int i = 0; i < 3; i++) {
        tabuleiro[x2][y2 + i] = 3; // Marca as posições do navio com '3'
        printf("Navio horizontal: (%d, %d)\n", x2, y2 + i);
    }
    
    // Exibe o tabuleiro atualizado com os navios posicionados
    printf("\nTabuleiro:\n");
    exibirTabuleiro(tabuleiro);
    
    return 0;
}
