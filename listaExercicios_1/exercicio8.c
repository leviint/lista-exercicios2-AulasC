//Leia uma temperatura em graus Celsius e converta-a para Fahrenheit usando a fórmula: F = (9/5) * C + 32 .

#include <stdio.h>

int main(){

    int temperature;

    puts("Digite uma temperatura, em Celsius, para convertê-la em Fahrenheit: ");
    scanf("%d", &temperature);

    printf("A temperatura %dC, convertida em Fahrenheit, ficará igual a %.2fF", temperature, (temperature * 1.8) + 32);

}