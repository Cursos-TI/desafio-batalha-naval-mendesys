#include <stdio.h>

int main() {

    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    
    //Criando o Tabuleiro (Matriz 10x10)
    int tabuleiro[10][10];
  
    //Exibindo o tabuleiro
    printf("\nTABULEIRO BATALHA NAVAL\n");

    printf("    ");

    for (int j = 0; j < 10; j++) {
        printf("%c ", linha[j]);  //Imprime as letras das colunas
    }
    printf("\n");

    for (int i = 0; i < 10; i++) {
        printf("%2d  ", i + 1);  //Imprime os números das linhas
        for (int j = 0; j < 10; j++) {
            if (i == 1 && j >= 0 && j <= 2) {  //Imprime um navio na horizontal representado pelo número 3
                tabuleiro[i][j] = 3;
            } else if (i >= 4 && i <= 6 && j == 9) {  //Imprime um navio na vertical representado pelo número 3
                tabuleiro[i][j] = 3;
            } else {
                tabuleiro[i][j] = 0;
            }

            if (i >= 7 && j <= 2 && i + j == 9) {  //Imprime um navio na diagonal esquerda representado pelo número 3
                tabuleiro[i][j] = 3;
            }

            if (i >= 7 && j >= 7 && i == j) {  //Imprime um navio na diagonal direita representado pelo número 3
                tabuleiro[i][j] = 3;
            }

            //Imprime um cone representado pelo número 5
            if (i == 9 && j >= 2 && j <= 6) {
                tabuleiro[i][j] = 5;
            }
            if (i == 8 && j >= 3 && j <= 5) {
                tabuleiro[i][j] = 5;
            }
            if (i == 7 && j == 4) {
                tabuleiro[i][j] = 5;
            }

            //Imprime uma cruz representada pelo número 5
            if (i == 2 && j >= 5) {
                tabuleiro[i][j] = 5;
            }
            if (i <= 4 && j == 7) {
                tabuleiro[i][j] = 5;
            }

            //Imprime um octaedro representado pelo número 5
            if (i == 4 && j <= 2) {
                tabuleiro[i][j] = 5;
            }
            if (i >= 3 && i <= 5 && j == 1) {
                tabuleiro[i][j] = 5;
            }

            printf("%d ", tabuleiro[i][j]);  //Imprime o tabuleiro
        }
        printf("\n");
    }
    printf("\n");
    
    return 0;
}