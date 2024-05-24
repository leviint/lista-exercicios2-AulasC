// Exercício 2: Laços de Repetição
// Crie um programa que imprima os primeiros 10 números naturais utilizando um loop for.

#include <stdio.h>

int main(){

    int num = 0;

    puts("Números naturais: ");

    for(int i = 0; i < 10; i++){
        printf("%d\n", num);
        num++;
    }

}