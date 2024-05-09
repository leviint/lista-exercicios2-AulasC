//2- Estruturas de decisão e Operadores lógicos Escreva um programa que leia um
//número e informe se ele é positivo, negativo ou zero

#include <stdio.h>

int main(){

    int num = 0;

    printf("Digite um numero inteiro para saber se ele e positivo, negativo ou zero: ");
    scanf("%d", &num);

    if(num < 0){
        printf("Este numero e negativo.");
    }else if(num > 0){
        printf("Este numero e positivo.");
    }else if(num == 0){
        printf("Este numero e 0");
    }else{
        printf("Isso nao e um numero/esse numero nao existe");
    }

}