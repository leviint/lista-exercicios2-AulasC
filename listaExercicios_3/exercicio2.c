// 2 - Maior elemento em um vetor: Escreva um programa que encontre o maior elemento em um vetor

#include <stdio.h>

int main(){

    int qntEl;
    int vetor[qntEl];
    int maximo = vetor[0];

    printf("Digite a quantidade de elementos neste vetor: ");
    scanf("%d", &qntEl);

    for (int i = 0; i < qntEl; i++){
        printf("Digite o número %d\n", i + 1);
        scanf("%d", &vetor[i]);
    }

    for (int i = 1; i < qntEl; i++){

        if(vetor[i] > maximo){
            maximo = vetor[i];
        }
    }
    printf("O maior vetor é %d!", maximo);
}