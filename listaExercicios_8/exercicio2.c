// **Exercício 2:** Crie uma `struct` chamada `Retângulo` 
// que represente um retângulo com membros para largura e altura.
// escreva um programa que cria uma instância dessa `struct` e imprime as informação: área do retângulo.

#include <stdio.h>

struct Retangulo{

    int altura;
    int largura;

};

typedef struct Retangulo retangulo;

int main(){

    retangulo retangulo = {10, 20};

    printf("Área do retângulo: %d metros quadrados", retangulo.altura * retangulo.largura);
    
}