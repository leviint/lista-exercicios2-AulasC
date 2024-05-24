// Exercício 3: Manipulação de Arrays de Structs
// Objetivo: Definir uma struct para representar um estudante e uma função que calcula a média de suas notas.

// Passos:
// 1 Defina uma struct Estudante com um campo nome (string até 50 caracteres) e um array de 3 floats para as notas.
// 2 Implemente uma função mediaNotas que recebe um Estudante e retorna a média de suas notas.
// 3 No main, crie um estudante, inicialize suas notas, e chame a função para imprimir a média.

#include <stdio.h>
#include <string.h>

typedef struct{

    char nome[50];
    float notas[3];

}Estudante;

float mediaNotas(Estudante estudante){

    float somaNotas = 0.0;

    for(int i = 0; i < 3; i++){
        somaNotas += estudante.notas[i];
    }

    printf("Nome: %s\n", estudante.nome);
    printf("Média de notas: %.2f", somaNotas / 3);

}

int main(){

    Estudante estudante;
    strcpy(estudante.nome, "Arthur");
    estudante.notas[0] = 7.00;
    estudante.notas[1] = 8.00;
    estudante.notas[2] = 9.00;

    mediaNotas(estudante);


}