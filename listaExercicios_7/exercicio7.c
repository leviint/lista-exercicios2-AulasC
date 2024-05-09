//7- Operadores de Entrada e Saída de Dados Escreva um programa que leia o nome e a
//idade de uma pessoa e depois imprima esses dados

#include <stdio.h>

int main(){

    char nome[50];
    int idade;

    printf("Digite o seu nome: ");
    fgets(nome, sizeof(nome), stdin);

    printf("Agora, digite a sua idade: ");
    scanf("%d", &idade);

    printf("Seu nome é %s e você tem %d anos de idade.", nome, idade);

}