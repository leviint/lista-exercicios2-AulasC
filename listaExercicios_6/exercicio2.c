//**Exercício 2:** Crie duas matrizes 2x2 e realize a soma entre elas.
//Armazene o resultado em uma terceira matriz e exiba o resultado na tela.

#include <stdio.h>

int main(){

    int mat1[2][2] = {{1,2},{3,4}};
    int mat2[2][2] = {{1,2},{3,4}};
    int matSoma[2][2];

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            matSoma[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    puts("Resultado: ");
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            printf("|%d|", matSoma[i][j]);
        }
        printf("\n");
    }
}