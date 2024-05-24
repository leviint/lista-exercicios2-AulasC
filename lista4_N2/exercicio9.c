// Exercício 9: Estruturas de Decisão
// Crie um programa que leia três números e determine qual é o maior e qual é o menor.

#include <stdio.h>

int main(){

    int numbers[3];
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int maximo = 3;
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
    printf("O maior número é %d!\n", minimo);

    for (int i = 0; i < size; i++){

        if(numbers[i] < maximo){
            maximo = numbers[i];
        }
    }
    printf("O menor número é %d!", maximo);

}