// 3 - Média dos elementos em um vetor: Escreva um programa que calcule a média dos elementos em um vetor.

#include <stdio.h>

int main(){

    int qntEl;
    int vetor[qntEl];
    int sum = 0;

    printf("Digite a quantidade de elementos neste vetor: ");
    scanf("%d", &qntEl);

    for (int i = 0; i < qntEl; i++){
        printf("Digite o número %d\n", i + 1);
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < qntEl; i++){

        sum += vetor[i];

    }

    int media = sum / qntEl;

    printf("A média dos vetores resulta em: %d\n", media);

}