//12- While Escreva um programa que imprima todos os números pares de 0 até 100

#include <stdio.h>

int main(){

    int num = 0;

    while(num < 100){
        num++;
        if(num % 2 == 0){
            printf("%d\n", num);
        }
    }

}