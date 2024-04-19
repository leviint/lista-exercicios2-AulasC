//Calculadora de Potência: Peça ao usuário para inserir uma base e um expoente, e calcule a potência correspondente.

#include <stdio.h>
#include <math.h>

int main(){

    int base, expoente;

    printf("Digite um número para ser a base, e um número para ser o Expoente de uma potência:\n");
    printf("Digite a Base: ");
    scanf("%d", &base);
    printf("Digite o Expoente: ");
    scanf("%d", &expoente);

    int resultado = pow(base, expoente);

    printf("A potência de base %d com expoente %d resulta em %d", base, expoente, resultado);


}