//**Exercício 3:** Crie uma matriz 4x4 e preencha-a com números aleatórios.
//Em seguida, calcule e imprima a soma de cada linha e de cada coluna

#include <stdio.h>

int main(){

    int matriz[4][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}, {13,14,15,16}};
    int somaMatriz = 0;

    printf("Soma das linhas:\n");
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            somaMatriz += matriz[i][j];
        }
        printf("%d\n", somaMatriz);
        somaMatriz = 0;
    }

    printf("Soma das colunas:\n");
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            somaMatriz += matriz[j][i];
        }
        printf("%d\n", somaMatriz);
        somaMatriz = 0;
    }

}