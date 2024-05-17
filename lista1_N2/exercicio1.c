// 1. **Cadastro de Alunos:**
// Crie uma estrutura `Aluno` com campos como nome, idade, matrícula, e média.
// Em seguida, crie um programa que permita ao usuário cadastrar informações de
// vários alunos e depois imprima essas informações na tela

#include <stdio.h>

struct Aluno{

    char nome[50];
    int idade;
    int matricula;
    float media;

};

typedef struct Aluno aluno;

int main(){

    int qntAlunos;

    printf("Digite a quantidade de alunos nessa sala: ");
    scanf("%d", &qntAlunos);

    aluno aluno[qntAlunos];

    for(int i = 0; i < qntAlunos; i++){

        printf("Informe o nome do aluno %d: ", i + 1);
        scanf("%s", aluno[i].nome);
        fflush(stdin);

        printf("Informe a idade do aluno %d: ", i + 1);
        scanf("%d", &aluno[i].idade);

        printf("Informe a matrícula do aluno %d: ", i + 1);
        scanf("%d", &aluno[i].matricula);

        printf("Informe a média do aluno %d: ", i + 1);
        scanf("%f", &aluno[i].media);

    }

    printf("\nDados dos alunos:\n");
    for(int i = 0; i < qntAlunos; i++){
        printf("Aluno %d - Nome: %s\nIdade: %d\nMatrícula: %d\nMédia: %d\n",
        i + 1, aluno[i].nome, aluno[i].idade, aluno[i].matricula, aluno[i].media);
    }

}
