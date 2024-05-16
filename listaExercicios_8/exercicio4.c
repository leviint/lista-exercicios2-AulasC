// **Exercício 4:** Crie uma `struct` chamada `Estudante` que represente um estudante com membros para
// nome, idade e uma array de notas.
// escreva um programa que cria uma instância dessa `struct` e imprime as informação: média das notas do estudante.

#include <stdio.h>

#define N 30

struct Estudante{

    char nome[N];
    int idade;
    int notas[N];

};

typedef struct Estudante estudante;

int main(){

    estudante estudante = {"Arthur", 18, {7, 5, 6, 8, 9, 10}};
    int somaNotas = 0;
    int size = sizeof(estudante.notas);

    printf("Tamanho do array: %d\n", size);

    for(int i = 0; i < 6; i++){
        printf("%d, ", estudante.notas[i]);
        somaNotas += estudante.notas[i];
    }

    printf("%.2f\n", somaNotas);

    printf("Estudante: %s\nIdade: %d\nMédia de notas: %d", estudante.nome, estudante.idade, somaNotas / 6);

}