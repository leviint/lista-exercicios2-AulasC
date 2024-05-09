//10- Estruturas de Decisão e Operadores Lógicos Implemente um programa que
//determine se um ano é bissexto ou não.

#include <stdio.h>

int main(){

    int ano = 0;

    printf("Digite um ano para verificar se ele e bissexto: ");
    scanf("%d", &ano);

    if(ano % 4 == 0){
        if(ano % 100 == 0){
            if(ano % 400 == 0){
                printf("Ano bissexto");
            }
            printf("Ano nao bissexto");
        }
        printf("Ano bissexto");
    }else{
        printf("Ano nao bissexto");
    }

}