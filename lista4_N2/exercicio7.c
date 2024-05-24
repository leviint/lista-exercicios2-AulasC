// Exercício 7: Vetores
// Crie um programa que leia 10 números e armazene-os em um vetor. 
// Em seguida, encontre e imprima o maior e o menor número.

#include <stdio.h>

int main(){

    int numbers[10];
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int maximo = 10;
    int minimo = 1;

    for(int i = 0; i < size; i++){
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    for (int i = 0; i < size; i++){

        if(numbers[i] > minimo){
            minimo = numbers[i];
        }
    }
    printf("O maior vetor é %d!\n", minimo);

    for (int i = 0; i < size; i++){

        if(numbers[i] < maximo){
            maximo = numbers[i];
        }
    }
    printf("O menor vetor é %d!", maximo);

}