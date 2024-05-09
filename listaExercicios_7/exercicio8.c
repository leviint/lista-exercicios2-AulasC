//8- Variáveis e Operadores Aritméticos Crie um programa que leia dois números e
//imprima o resultado da multiplicação entre eles

#include <stdio.h>

int main(){

    int num1, num2;

    printf("Digite um número: ");
    scanf("%d", &num1);

    printf("Digite outro número: ");
    scanf("%d", &num2);

    printf("O produto entre esses números é %d", num1 * num2);

}