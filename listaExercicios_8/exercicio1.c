// **Exercício 1:** Crie uma `struct` chamada `Livro` que armazene as seguintes informações sobre um livro:
// título, autor e ano de publicação.
// Em seguida, escreva um programa que cria uma instância dessa `struct` e imprime as informações do livro.

#include <stdio.h>

#define N 30

struct Livro{

    char titulo[N];
    char autor[N];
    int anoPubli;

};

typedef struct Livro livro;

int main(){

    livro livro = {"Senhor dos Aneis", "J. R. R. Tolkien", 1954};

    printf("Dados do Livro:\nTítulo: %s\nAutor: %s\nAno de Publicação: %d", livro.titulo, livro.autor, livro.anoPubli);

}