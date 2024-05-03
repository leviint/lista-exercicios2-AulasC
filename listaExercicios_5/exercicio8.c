//8. **Contagem de ocorrências de uma letra em uma string**: Escreva um programa que leia uma string e uma letra do
//usuário e conte quantas vezes a letra aparece na string. Exiba o resultado.

#include <stdio.h>
#include <string.h>

int main(){

    char string[50];
    char character;
    int i;
    int contagemLetras = 0;

    printf("Digite uma palavra: ");
    fgets(string, sizeof(string), stdin);

    printf("Digite uma única letra do alfabeto: ");
    scanf("%s", &character);
    fflush(stdin);

    for(i = 0; i < sizeof(string); i++){
        if(string[i] == character){
            contagemLetras++;
        }
    }

    printf("Esta letra aparece %d vezes na palavra", contagemLetras);
}