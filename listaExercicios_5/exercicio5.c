//5. **Comparação de strings**: Escreva um programa que leia duas strings do usuário e
//compare-as para determinar se são iguais ou diferentes. Exiba o resultado da comparação.

#include <stdio.h>
#include <string.h>

int main(){

    char string1[50];
    char string2[50];

    printf("Digite uma linha de texto: ");
    fgets(string1, sizeof(string1), stdin);

    printf("Agora, digite mais uma linha de texto: ");
    fgets(string2, sizeof(string2), stdin);

    if(strcmp(string1, string2) == 0){
        printf("Suas strings são idênticas!");
    }else{
        printf("Suas strings são diferentes.");
    }
    
}