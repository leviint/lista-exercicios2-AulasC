//Crie um programa que leia um número inteiro do usuário e imprima se ele é par ou ímpar.

#include <stdio.h>

int main(){

    int num = 0;

    printf("Digite um numero para saber se ele e impar ou par: ");
    scanf("%d", &num);

    if(num % 2 == 0){
        printf("Este numero e par.");
    }else{
        printf("Este numero e impar.");
    }

}