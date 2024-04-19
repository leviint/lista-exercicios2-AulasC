//Escreva um programa que verifique se um ano dado é bissexto ou não 
//(Anos divisíveis por 4 que não são por 100, a não ser que sejam divisíveis por 400)

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