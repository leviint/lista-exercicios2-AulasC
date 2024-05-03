//Crie um programa que calcule a média dos números em um vetor de inteiros

#include <stdio.h>

int main(){

    int qntEl;
    int inteiros[qntEl];
    int sum = 0;

    printf("Digite a quantidade de elementos nesse vetor: ");
    scanf("%d", &qntEl);

    for (int i = 0; i < qntEl; i++){
        printf("Digite o número %d\n", i + 1);
        scanf("%d", &inteiros[i]);
    }

    for(int i = 0; i < qntEl; i++){
        
        sum += inteiros[i];

    }

    printf("Média dos elementos do vetor: %d", sum/qntEl);

}