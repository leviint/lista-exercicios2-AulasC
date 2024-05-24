// Exercício 1: Definição e Inicialização de Structs
// Objetivo: Definir uma struct para representar um ponto em um plano cartesiano e uma função
// que recebe um ponto e retorna a distância desse ponto à origem.

// Passos:
// 1 Defina uma struct Ponto com dois campos: x e y (ambos do tipo float).
// 2 Implemente uma função distanciaOrigem que recebe um Ponto e retorna a distância desse ponto à origem (0, 0).
// 3 No main, crie um ponto, inicialize seus valores, e chame a função para imprimir a distância.

#include <stdio.h>
#include <math.h>

struct Ponto{

    float x;
    float y;

};

float distanciaOrigem(float x, float y){

    struct Ponto ponto;

    ponto.x = x;
    ponto.y = y;

    float distancia = sqrt((x * x) + ( y * y));
    printf("Distância do ponto (%.2f, %.2f) até a origem: %.2f", x, y, distancia);

}

int main(){

    distanciaOrigem(2, 3);

}



