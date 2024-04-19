//Contador de Dígitos: Crie um programa que conte o número de dígitos em um número inteiro
//fornecido pelo usuário.

#include <stdio.h>

int main(){

    int numero, comprimento = 0;

    printf("Digite um número inteiro para saber o seu número de dígitos: ");
    scanf("%d", &numero);

    if(numero < 0){
        numero *= -1;
    }


    do{
        numero /= 10;
        comprimento++;

    }while(numero != 0);

    printf("O número tem %d dígitos.", comprimento);

}