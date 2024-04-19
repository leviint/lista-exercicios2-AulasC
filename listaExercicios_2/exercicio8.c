//Conversor de Moeda: Crie um programa que converta um valor em uma moeda para outra
//moeda, com base em taxas de conversão fornecidas pelo usuário

#include <stdio.h>

int main(){

    float dinheiroInicial;
    int escolhaMenu;

    printf("Digite um valor, em reais: ");
    scanf("%f", &dinheiroInicial);

    printf("Para qual valor você gostaria de converter?\n");
    printf("[1]: Dólar\n[2]: Euro\n[3]: Peso\n");
    scanf("%d", &escolhaMenu);

    switch(escolhaMenu){
    case 1:
        printf("Opção escolhida: Dólar\n");
        printf("R$%.2f, em Dólar: $%.2f", dinheiroInicial, dinheiroInicial / 5.25);
        break;
    case 2:
        printf("Opção escolhida: Euro\n");
        printf("R$%.2f, em Euros: €%.2f", dinheiroInicial, dinheiroInicial / 5.30);
        break;
    case 3:
        printf("Opção escolhida: Peso\n");
        printf("R$%.2f, em Pesos: AR$%.2f", dinheiroInicial, dinheiroInicial * 165.89);
        break;
    default:
        printf("Valor inválido! Tente novamente.");
        break;
    }

}