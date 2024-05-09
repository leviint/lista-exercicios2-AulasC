//5- Matrizes (Arrays Bidimensionais) Crie um programa que leia uma matriz quadrada de
//ordem n (onde n é lido pelo usuário) e calcule a soma dos elementos da diagonal principal.

#include <stdio.h>

int main(){

    int n;

    printf("Digite a ordem da matriz quadrada: ");
    scanf("%d", &n);

    int matriz[n][n];
    int somaDiagonal = 0;

    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("|%d|", matriz[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < n; i++){
        somaDiagonal += matriz[i][i];
    }

    printf("A soma dos elementos da diagonal principal é: %d\n", somaDiagonal);

}
