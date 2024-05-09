//6- Strings e Funções de Biblioteca Implemente um programa que leia uma string (nome)
//e exiba o comprimento da string (número de caracteres)

#include <stdio.h>
#include <string.h>

int main(){

    char string[50];

    printf("Digite qualquer texto para contar a quantidade de caracteres: ");
    fgets(string, sizeof(string), stdin);

    if (string[strlen(string) - 1] == '\n'){
        string[strlen(string) - 1] = '\0';
    }

    int length = strlen(string);
    
    printf("A quantidade de caracteres nesse texto é: %d", length);

}