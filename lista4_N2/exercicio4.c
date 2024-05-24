// Exercício 4: Vetores
// Crie um programa que leia 5 números, armazene-os em um vetor, e em seguida, imprima-os na ordem inversa.

#include <stdio.h>

int main(){

    int arrayNum[5];
    int tamanho = sizeof(arrayNum) / sizeof(arrayNum[0]);

    for(int i = 0; i < 5; i++){
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &arrayNum[i]);
    }

    puts("Imprimindo o Array invertido: ");

    for(int i = (tamanho - 1); i >= 0; i--){
        printf("%d", arrayNum[i]);
    }

}