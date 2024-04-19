//Média de Números: Escreva um programa que solicite ao usuário quantos números ele deseja
//inserir e depois calcule a média desses números.

#include <stdio.h>

int main(){

    int qntNumeros, media, i = 0, numeros, somaNumeros = 0;

    printf("Digite quantos números você deseja inserir no cálculo da média: ");
    scanf("%d", &qntNumeros);

    while(i < qntNumeros){
        printf("Digite o %d° Número: ", i + 1);
        scanf("%d", &numeros);

    somaNumeros += numeros;
    i++;
    }    

    media = somaNumeros/qntNumeros;

    printf("Soma dos números: %d\n", somaNumeros);
    printf("Média dos números: %d\n", media);

}