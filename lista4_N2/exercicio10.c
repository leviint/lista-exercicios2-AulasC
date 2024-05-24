// Exercício 10: Structs e Vetores
// Crie um programa que defina uma struct para representar um funcionário (nome, idade, salário).
// Leia os dados de 5 funcionários, armazene-os em um vetor de structs e, em seguida, imprima os dados de
// todos os funcionários.

#include <stdio.h>

typedef struct{

    char nome[50];
    int idade;
    int salario;

}Funcionario;

int main(){

    Funcionario funcionario[5];

    for(int i = 0; i < 5; i ++){

        printf("Informe o nome do funcionário %d: ", i + 1);
        scanf("%s", funcionario[i].nome);
        fflush(stdin);

        printf("Informe a idade do funcionário %d: ", i + 1);
        scanf("%d", &funcionario[i].idade);

        printf("Informe o salário do funcionário %d em reais: ", i + 1);
        scanf("%d", &funcionario[i].salario);

    }

    printf("\nDados dos funcionários:\n");
    for(int i = 0; i < 5; i++){
        printf("Funcionário %d - Nome: %s\nIdade: %d\nSalário: R$%d\n,00", i + 1, funcionario[i].nome, funcionario[i].idade, funcionario[i].salario);
    }


}