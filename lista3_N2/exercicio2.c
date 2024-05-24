// Exercício 2: Operações com Structs
// Objetivo: Definir uma struct para representar um retângulo e uma função que calcula sua área.

// Passos:
// 1 Defina uma struct Retangulo com dois campos: largura e altura (ambos do tipo float).
// 2 Implemente uma função areaRetangulo que recebe um Retangulo e retorna a área.
// 3 No main, crie um retângulo, inicialize seus valores, chame a função para imprimir a área.

#include <stdio.h>

typedef struct{

    float altura;
    float largura;

}Retangulo;

float areaRetangulo(float a, float l){

    Retangulo retangulo;

    retangulo.altura = a;
    retangulo.largura = l;

    return a * l;

}

int main(){

    float area = areaRetangulo(5, 6);
    printf("Área do retângulo: %.2f", area);

}

