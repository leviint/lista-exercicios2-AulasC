// **Exercício 3:** Crie uma `struct` chamada `Pessoa` para armazenar informações
// sobre uma pessoa, incluindo nome, idade e altura. escreva um programa que cria uma instância dessa `struct`
// e imprime as informações: média de idade e altura.

#include <stdio.h>

#define N 30

struct Pessoa{

    char nome[N];
    int idade;
    float altura;

};

typedef struct Pessoa pessoa;

int main(){

    pessoa pessoa = {"Arthur", 18, 1.78};

    printf("Dados do %s:\nIdade: %d\nAltura: %.2fm\n", pessoa.nome, pessoa.idade, pessoa.altura);
    printf("Média entre idade e altura: %.2f", (pessoa.idade + pessoa.altura) / 2);

}