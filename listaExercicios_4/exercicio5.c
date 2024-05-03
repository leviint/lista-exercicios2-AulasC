//Escreva um programa que calcule a soma de todos os elementos de um vetor de inteiros

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

    printf("Soma dos elementos: %d\n", sum);

}