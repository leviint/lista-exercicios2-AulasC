//4. **Concatenação de strings**: Escreva um programa que leia duas strings do usuário e
//concatene-as em uma terceira string. Em seguida, exiba a string resultante.

#include <stdio.h>
#include <string.h>

int main(){

    char string1[50];
    char string2[50];

    printf("Digite uma linha de texto: ");
    fgets(string1, sizeof(string1), stdin);

    printf("Agora, digite mais uma linha de texto: ");
    fgets(string2, sizeof(string2), stdin);

    strcat(string1, string2);

    printf("Suas strings, juntas: %s", string1);

}