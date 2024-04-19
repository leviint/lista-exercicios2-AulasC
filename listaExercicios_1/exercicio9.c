//Peça ao usuário um número inteiro positivo e faça uma contagem regressiva a partir desse número até 1

#include <stdio.h>

int main(){

    int countdown;

    puts("Digite um número para uma contagem regressiva até 1: ");
    scanf("%d", &countdown);

    while(countdown >= 1){
        printf("%d\n", countdown);
        countdown--;
    }

}