//1. **Soma de elementos em um array**: dado o int array[5] = {1,2,3,4,5}, Escreva um programa que
//calcule a soma de todos os elementos em um array de inteiros.

#include <stdio.h>

int main(){

    int array[5] = {1, 2, 3, 4, 5};
    int sum = 0;

    for(int i = 0; i < 5; i++){
        sum += array[i];
    }

    printf("Soma dos elementos da array: %d", sum);
}