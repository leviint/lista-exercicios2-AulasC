//1- Operadores de entrada e saída de dados Escreva um programa que
//leia dois números inteiros e imprima a soma deles

#include <stdio.h>

int main(){

    int num1, num2;

    printf("Digite um número: ");
    scanf("%d", &num1);

    printf("Digite outro número: ");
    scanf("%d", &num2);

    printf("A soma entre esses números é %d", num1 + num2);

}