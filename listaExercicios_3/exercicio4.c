// 4 - Inversão de vetor: Escreva um programa que inverta a ordem dos elementos em um vetor.

#include <stdio.h>

int main(){

    int qntEl;
    int vetor[qntEl];
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    printf("Digite a quantidade de elementos neste vetor: ");
    scanf("%d", &qntEl);

    for(int i = 0; i < qntEl; i++){
        printf("Digite o número %d\n", i + 1);
        scanf("%d", &vetor[i]);
    }

    for(int i = (tamanho - 1); i >= 0; i--){

        printf("%d", vetor[i]);

    }

}