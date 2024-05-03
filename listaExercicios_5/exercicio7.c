//7. **Inversão de uma string**: Escreva um programa que leia uma string do usuário e
//inverta os caracteres na string. Em seguida, exiba a string invertida.

#include <stdio.h>
#include <string.h>

int main(){

    char string[50];
    char inverseString[50];
    char temporary;

    printf("Digite uma linha de texto para invertê-la: ");
    fgets(string, sizeof(string), stdin);

    for (int i = 0, j = strlen(string) - 1; i < j; i++, j--){
        temporary = string[i];
        string[i] = string[j];
        string[j] = temporary;
    }

    printf("String invertida: %s", string);

}