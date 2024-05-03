//Usando vetores, Escreva um programa que leia dois números inteiros e exiba a soma deles.

#include <stdio.h>

int main(){

    int qntEl = 2;
    int vetor[qntEl];
    int sum = 0;


    for (int i = 0; i < qntEl; i++){
        printf("Digite o número %d\n", i + 1);
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < qntEl; i++){

        sum += vetor[i];

    }

    printf("%d\n", sum);

}