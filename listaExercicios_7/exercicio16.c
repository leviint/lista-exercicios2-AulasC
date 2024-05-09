//16- Manipulação de Strings Implemente um programa que leia uma frase (string) e conte
//quantas vogais (a, e, i, o, u) ela possui

#include <stdio.h>
#include <string.h>

int main(){
    
    char string[100];
    int vogais = 0;

    printf("Digite uma string para contar quantas vogais ela possui: ");
    fgets(string, sizeof(string), stdin);

    for (int i = 0; i < strlen(string); i++) {
        if (string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u' ||
            string[i] == 'A' || string[i] == 'E' || string[i] == 'I' || string[i] == 'O' || string[i] == 'U') {
            vogais++;
        }
    }

    printf("A quantidade de vogais na string é: %d\n", vogais);

}