// Exercício 5: Structs
// Crie um programa que defina uma struct para representar um estudante (nome, idade e nota).
// Leia os dados de 3 estudantes e imprima-os.

#include <stdio.h>

typedef struct{

    char nome[50];
    int idade;
    float nota;

}Estudante;

int main(){

    Estudante estudante[3];

    for(int i = 0; i < 3; i++){

        printf("Informe o nome do estudante %d: ", i + 1);
        scanf("%s", estudante[i].nome);
        fflush(stdin);

        printf("Informe a idade do estudante %d: ", i + 1);
        scanf("%d", &estudante[i].idade);

        printf("Informe a nota do estudante %d: ", i + 1);
        scanf("%f", &estudante[i].nota);

    }

    printf("\nDados dos estudantes:\n");
    for(int i = 0; i < 3; i++){
        printf("Estudante %d - Nome: %s\nIdade: %d\nNota: %.2f\n",
        i + 1, estudante[i].nome, estudante[i].idade, estudante[i].nota);
    }

}
