//Solicite ao usuário um número inteiro e imprima a tabuada desse número de 1 a 10

#include <stdio.h>

int main(){

    int numeroTabuada, multiplier;

    printf("Insira um numero para ter a sua tabuada de 1 a 10: ");
    scanf("%d", &numeroTabuada);

    printf("A tabuada do numero %d abaixo:\n", numeroTabuada);

    while(multiplier != 10){
        multiplier++;
        printf("%d x %d = %d\n",numeroTabuada, multiplier, numeroTabuada * multiplier);
    }

    multiplier = 0;

}