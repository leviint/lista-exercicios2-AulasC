// 8. **Conversão entre temperaturas Celsius e Fahrenheit:**
// Crie um aplicativo que permita ao usuário escolher entre entrar com a
// temperatura em Celsius ou Fahrenheit. A conversão é realizada através de um comando `switch`.

#include <stdio.h>

//Celsius para Fahrenheit
int celsiusToFahrenheit(int temperature){
    printf("Opção selecionada: Celsius para Fahrenheit\n");
    printf("Digite a temperatura a ser convertida, em Celsius: ");

    scanf("%d", &temperature);

    printf("A temperatura %dC, convertida em Fahrenheit, ficará igual a %.2fF",
    temperature, (temperature * 1.8) + 32);
}

//Fahrenheit para Celsius
int fahrenheitToCelsius(int temperature){
    printf("Opção selecionada: Fahrenheit para Celsius\n");
    printf("Digite a temperatura a ser convertida, em Fahrenheit: ");

    scanf("%d", &temperature);

    printf("A temperatura %dF, convertida em fahrenheit, ficará igual a %.2f",
    temperature, (temperature / 1.8) - 32);
}

int main(){

    int temperature, choice;

    printf("Digite [1]Celsius para Fahrenheit ou [2]Fahrenheit para Celsius: ");
    scanf("%d", &choice);

    switch(choice){
        case 1:
            celsiusToFahrenheit(temperature);
            break;
        case 2:
            fahrenheitToCelsius(temperature);
            break;
        default:
            printf("Opção inválida!");
            break;
    }
}