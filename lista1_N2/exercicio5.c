// 5. **Cadastro de Livros:**
// Crie uma estrutura `Livro` com campos como título, autor e ano de publicação.
// Permita ao usuário cadastrar vários livros e depois imprima essas informações na
// tela.

#include <stdio.h>

struct Livro{

    char titulo[50];
    char autor[50];
    int anoPubli;

};

typedef struct Livro livro;

int main(){

    int qntLivros;

    printf("Digite a quantidade de livros a cadastrar: ");
    scanf("%d", &qntLivros);

    livro livro[qntLivros];

    for(int i = 0; i < qntLivros; i ++){

        printf("Informe o título do livro %d: ", i + 1);
        scanf("%s", livro[i].titulo);
        fflush(stdin);

        printf("Informe o autor do livro %d: ", i + 1);
        scanf("%s", &livro[i].autor);
        fflush(stdin);

        printf("Informe o ano de publicação do livro %d: ", i + 1);
        scanf("%d", &livro[i].anoPubli);

    }

    printf("\nDados dos livros:\n");
    for(int i = 0; i < qntLivros; i++){
        printf("Livro %d - Título: %s\nAutor: %s\nAno de Publicação: %d\n",
        i + 1, livro[i].titulo, livro[i].autor, livro[i].anoPubli);
    }


}