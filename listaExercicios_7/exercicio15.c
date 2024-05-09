//15- Comando de Controle de Desvio e Vetores Escreva um programa que preencha um
//vetor com 10 números inteiros e depois imprima apenas os números positivos

#include <stdio.h>

int main(){

    int vetor[10];

    printf("Digite 10 números inteiros:\n");
    for (int i = 0; i < 10; i++){
        printf("Número %d: ", i+1);
        scanf("%d", &vetor[i]);
    }

    printf("Números positivos:\n");
    for (int i = 0; i < 10; i++){
        if (vetor[i] > 0){
            printf("%d\n", vetor[i]);
        }
    }
}
