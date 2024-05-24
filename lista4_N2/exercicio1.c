// Exercício 1: Variáveis e Operações Básicas
// Crie um programa que leia dois números inteiros, calcule e exiba a soma, subtração,
// multiplicação e divisão deles.

#include <stdio.h>

int main(){

    int num1, num2;

    puts("Digite o primeiro número: ");
    scanf("%d", &num1);

    puts("Digite o segundo número: ");
    scanf("%d", &num2);

    puts("Operações básicas com esses números: ");

    printf("ADIÇÃO: %d + %d = %d\n", num1, num2, num1 + num2);
    printf("SUBTRAÇÃO: %d + %d = %d\n", num1, num2, num1 - num2);
    printf("MULTIPLICAÇÃO: %d x %d = %d\n", num1, num2, num1 * num2);
    printf("DIVISÃO: %d / %d = %d\n", num1, num2, num1 / num2);

}