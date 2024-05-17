// 2. **Cadastro de Produtos:**
// Crie uma estrutura `Produto` com campos como nome, preço e quantidade em
// estoque. Em seguida, permita ao usuário cadastrar vários produtos e depois
// imprima essas informações na tela.

#include <stdio.h>

struct Produto{

    char nome[50];
    int preco;
    int qntEstoque;

};

typedef struct Produto produto;

int main(){

    int qntProdutos;

    printf("Digite a quantidade de produtos a cadastrar: ");
    scanf("%d", &qntProdutos);

    produto produto[qntProdutos];

    for(int i = 0; i < qntProdutos; i ++){

        printf("Informe o nome do produto %d: ", i + 1);
        scanf("%s", produto[i].nome);
        fflush(stdin);

        printf("Informe o preço do produto %d em reais: ", i + 1);
        scanf("%d", &produto[i].preco);

        printf("Informe a quantidade em estoque do produto %d: ", i + 1);
        scanf("%d", &produto[i].qntEstoque);

    }

    printf("\nDados dos produtos:\n");
    for(int i = 0; i < qntProdutos; i++){
        printf("Produto %d - Nome: %s\nPreço: R$%d\nEstoque: %d\n",
        i + 1, produto[i].nome, produto[i].preco, produto[i].qntEstoque);
    }


}