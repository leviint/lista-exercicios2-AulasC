//Conversor de Temperatura: Crie um programa que converta a temperatura de Celsius para
//Fahrenheit ou vice-versa, dependendo da escolha do usuário.

#include <stdio.h>

int main(){

    int temperature, choice;

    printf("Digite [1]Celsius para Fahrenheit ou [2]Fahrenheit para Celsius: ");
    scanf("%d", &choice);

    switch(choice){
        case 1:
            printf("Opção selecionada: Celsius para Fahrenheit\n");
            printf("Digite a temperatura a ser convertida, em Celsius: ");
            scanf("%d", &temperature);

            printf("A temperatura %dC, convertida em Fahrenheit, ficará igual a %.2fF", temperature, (temperature * 1.8) + 32);
            break;
        case 2:
            printf("Opção selecionada: Fahrenheit para Celsius\n");
            printf("Digite a temperatura a ser convertida, em Fahrenheit: ");
            scanf("%d", &temperature);

            printf("A temperatura %dF, convertida em fahrenheit, ficará igual a %.2f", temperature, (temperature / 1.8) - 32);
            break;
        default:
            printf("Opção inválida!");
            break;
    }
}