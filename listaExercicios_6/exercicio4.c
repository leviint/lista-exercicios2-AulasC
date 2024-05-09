//Crie uma matriz 3x3 e realize a multiplicação de todos os seus elementos por um valor fornecido pelo usuário.
//Exiba a matriz resultante

#include <stdio.h>

int main(){

    int mat[3][3];
    int multi;

    printf("Digite um número para multiplicar todos os elementos de uma matriz 3x3 matriz e obter seu produto:\n");
    scanf("%d", &multi);

    printf("Agora, digite os elementos de uma matriz 3x3:\n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("Digite o valor para a linha %d coluna %d \n", i + 1, j + 1);
            scanf("%d", &mat[i][j]);
            mat[i][j] *= multi;
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("|%d|", mat[i][j]);
        }
        puts("");
    }
}