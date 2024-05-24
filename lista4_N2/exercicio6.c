// Exercício 6: Laços de Repetição e Decisão
// Crie um programa que leia 10 números e conte quantos são pares e quantos são ímpares.

#include <stdio.h>

int main(){

    int numbers[10];
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int qntPares = 0, qntImpares = 0;

    for(int i = 0; i < size; i++){
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    for(int i = 0; i < size; i++){
        if(numbers[i] % 2 == 0){
            qntPares++;
        }else if(numbers[i] % 2 != 0){
            qntImpares++;
        }
    }

    printf("Quantidade de números pares: %d\nQuantidade de números ímpares: %d", qntPares, qntImpares);

}