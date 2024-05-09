//**Exercício 1:** Crie uma matriz 3x3 para armazenar números inteiros.
//Preencha a matriz com valores fornecidos pelo usuário e depois exiba a matriz na tela.

#include <stdio.h>

int main(){

    int inteiros[3][3];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("Digite o valor para a linha %d coluna %d \n", i + 1, j + 1);
            scanf("%d", &inteiros[i][j]);
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("|%d|", inteiros[i][j]);
        }
        printf("\n");
    }

}