// 3. **Cadastro de Pessoas:**
// Crie uma estrutura `Pessoa` com campos como nome, idade, e cidade. Permita ao
// usuário cadastrar várias pessoas e depois imprima essas informações na tela.

#include <stdio.h>

struct Pessoa{

    char nome[50];
    int idade;
    char cidade[50];

};

typedef struct Pessoa pessoa;

int main(){

    int qntPessoas;

    printf("Digite a quantidade de pessoas: ");
    scanf("%d", &qntPessoas);

    pessoa pessoa[qntPessoas];

    for(int i = 0; i < qntPessoas; i ++){

        printf("Informe o nome da pessoa %d: ", i + 1);
        scanf("%s", pessoa[i].nome);
        fflush(stdin);

        printf("Informe a idade da pessoa %d: ", i + 1);
        scanf("%d", &pessoa[i].idade);

        printf("Informe a cidade em que a pessoa %d mora: ", i + 1);
        scanf("%s", &pessoa[i].cidade);
        fflush(stdin);

    }

    printf("\nDados das pessoas:\n");
    for(int i = 0; i < qntPessoas; i++){
        printf("Pessoa %d - Nome: %s\nIdade: %d\nCidade: %s\n",
        i + 1, pessoa[i].nome, pessoa[i].idade, pessoa[i].cidade);
    }

}