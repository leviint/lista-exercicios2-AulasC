// 4. **Registro de Funcionários:**
// Crie uma estrutura `Funcionario` com campos como nome, cargo e salário.
// Permita ao usuário cadastrar informações de vários funcionários e depois imprima
// essas informações na tela.

#include <stdio.h>

struct Funcionario{

    char nome[50];
    char cargo[50];
    int salario;

};

typedef struct Funcionario funcionario;

int main(){

    int qntFuncionarios;

    printf("Digite a quantidade de funcionários a cadastrar: ");
    scanf("%d", &qntFuncionarios);

    funcionario funcionario[qntFuncionarios];

    for(int i = 0; i < qntFuncionarios; i ++){

        printf("Informe o nome do funcionário %d: ", i + 1);
        scanf("%s", funcionario[i].nome);
        fflush(stdin);

        printf("Informe o cargo do funcionário %d: ", i + 1);
        scanf("%s", &funcionario[i].cargo);

        printf("Informe o salário do funcionário %d em reais: ", i + 1);
        scanf("%d", &funcionario[i].salario);

    }

    printf("\nDados dos funcionários:\n");
    for(int i = 0; i < qntFuncionarios; i++){
        printf("Funcionário %d - Nome: %s\nCargo: %s\nSalário: R$%d\n",
        i + 1, funcionario[i].nome, funcionario[i].cargo, funcionario[i].salario);
    }


}