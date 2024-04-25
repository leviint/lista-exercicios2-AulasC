// 1 - Soma de elementos em um vetor: Escreva um programa que calcula a soma de todos os elementos em um vetor.

#include <stdio.h>

int main(){

    int qntEl;
    int vetor[qntEl];
    int sum = 0;

    printf("Digite a quantidade de elementos nesse vetor: ");
    scanf("%d", &qntEl);

    for (int i = 0; i < qntEl; i++){
        printf("Digite o número %d\n", i + 1);
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < qntEl; i++){

        sum += vetor[i];

    }

    printf("%d\n", sum);

}