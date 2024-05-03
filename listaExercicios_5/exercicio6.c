//6. **Cópia de strings**: Escreva um programa que leia uma string do usuário e copie-
//a para outra string. Em seguida, exiba a string copiada.

#include <stdio.h>
#include <string.h>

int main(){

    char string[50];
    char copyString[50];

    printf("Digite uma linha de texto: ");
    fgets(string, sizeof(string), stdin);

    printf("Copiando sua string para outra...\n");
    
    strcpy(copyString, string);

    printf("String copiada: %s", copyString);

}