//Implemente um programa que calcule o produto de todos os números em um vetor de inteiros

//Usando vetores, Escreva um programa que leia dois números inteiros e exiba a soma deles.

#include <stdio.h>

int main(){

    int qntEl;
    int vetor[qntEl];
    int prod = 1;

    printf("Digite a quantidade de elementos nesse vetor: ");
    scanf("%d", &qntEl);

    for (int i = 0; i < qntEl; i++){
        printf("Digite o número %d\n", i + 1);
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < qntEl; i++){

        prod *= vetor[i];

    }

    printf("Produto dos elementos: %d\n", prod);

}