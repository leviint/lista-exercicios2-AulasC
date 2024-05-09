//11- Switch Case Desenvolva um programa que leia um número de 1 a 7 e imprima o dia
//da semana correspondente, sendo 1 para Domingo

#include <stdio.h>

int main(){

    int escolha;

    printf("Digite o número do dia da semana, de 1 a 7, para receber o dia correspondente: ");
    scanf("%d", &escolha);

    switch(escolha){
        case 1:
            printf("Domingo");
            break;
        case 2:
            printf("Segunda-Feira");
            break;
        case 3:
            printf("Terça-Feira");
            break;
        case 4:
            printf("Quarta-Feira");
            break;
        case 5:
            printf("Quinta-Feira");
            break;
        case 6:
            printf("Sexta-Feira");
            break;
        case 7:
            printf("Sábado");
            break;
        default:
            printf("Opção inválida!");
            break;
    }
}