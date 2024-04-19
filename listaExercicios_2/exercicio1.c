//Verificador de Números Primos: Crie um programa que determine se um número fornecido
//pelo usuário é primo ou não.

#include <stdio.h>

int main(){

    int num;

    printf("Digite um número inteiro para saber se ele é primo ou não: ");
    scanf("%d", &num);

    if(num / num == 1 && num / 1 == num && (num % 2 != 0 || num == 2)){
        printf("O número %d é primo!", num);
    }else{
        printf("O número %d não é primo!", num);
    }

}

