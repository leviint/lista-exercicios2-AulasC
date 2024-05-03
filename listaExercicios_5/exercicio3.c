//3. **Contagem de caracteres em uma string**: Escreva um programa que leia uma string do usuário e conte
//quantos caracteres a string possui, excluindo o caractere nulo de terminação '\0'. Em seguida, exiba o resultado.

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