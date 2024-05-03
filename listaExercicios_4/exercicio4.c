//Implemente um programa que conte quantos números pares existem em um vetor de inteiros

#include <stdio.h>

int main(){

    int qntEl;
    int inteiros[qntEl];
    int qntPares = 0;

    printf("Digite a quantidade de elementos desse vetor: ");
    scanf("%d", &qntEl);

    for(int i = 0; i < qntEl; i++){
        printf("Digite o número %d\n", i + 1);
        scanf("%d", &inteiros[i]);

    }

    for(int i = 0; i < qntEl; i++){
        if(inteiros[i] % 2 == 0){
            qntPares++;
        }
    }

    printf("Existem %d números pares nesse vetor.", qntPares);

}