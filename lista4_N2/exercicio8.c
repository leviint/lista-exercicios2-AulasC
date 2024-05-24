// Exercício 8: Laços de Repetição
// Crie um programa que leia um número inteiro positivo e calcule o seu fatorial.

#include <stdio.h>

int main(){

    int num;

    puts("Digite um número inteiro positivo: ");
    scanf("%d", &num);

    int resultado = num;

    if(num > 0){

        for(int i = 1; i < num; i++){
            resultado  = resultado * i;
        }

        printf("O fatorial do número %d = %d \n", num, resultado);

    }else if(num < 0){
        printf("O número %d não é positivo!", num);
    }


}