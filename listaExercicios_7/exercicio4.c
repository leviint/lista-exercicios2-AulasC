//4- Switch case, While, do while, if, if else, For, Comando de controle de desvio e
// Vetores Desenvolva um programa que utilize um menu para realizar operações em um
// vetor de inteiros. As operações devem incluir inserção, remoção, exibição e busca de elementos

#include <stdio.h>

int main(){

    int vetor[100];
    int tamanho = 0;
    int escolha, num, i, pos;

    do{
        printf("\nMenu de Operacoes:\n");
        printf("(1) Inserir elemento\n");
        printf("(2) Remover elemento\n");
        printf("(3) Exibir vetor\n");
        printf("(4) Buscar elemento\n");
        printf("(5) Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &escolha);

        switch(escolha){
            case 1:
                if(tamanho < 100){
                    printf("Digite o numero a ser inserido: ");
                    scanf("%d", &num);
                    vetor[tamanho] = num;
                    tamanho++;
                    printf("Elemento inserido com sucesso!\n");
                }else{
                    printf("O vetor esta cheio!\n");
                }
                break;

            case 2:
                if(tamanho > 0){
                    printf("Digite a posicao do elemento a ser removido (0 a %d): ", tamanho - 1);
                    scanf("%d", &pos);
                    if(pos >= 0 && pos < tamanho){
                        for(i = pos; i < tamanho - 1; i++){
                            vetor[i] = vetor[i + 1];
                        }
                        tamanho--;
                        printf("Elemento removido com sucesso!\n");
                    }else{
                        printf("Posicao invalida!\n");
                    }
                }else{
                    printf("O vetor esta vazio!\n");
                }
                break;

            case 3:
                if(tamanho == 0){
                    printf("O vetor esta vazio!");
                }else{
                    printf("Vetor:\n");
                    for(i = 0; i < tamanho; i++){
                        printf("[%d] ", vetor[i]);
                    }  
                }
                printf("\n");
                break;

            case 4:
                if(tamanho > 0){
                    printf("Digite o elemento a ser buscado: ");
                    scanf("%d", &num);
                    for(i = 0; i < tamanho; i++){
                        if(vetor[i] == num){
                            printf("Elemento encontrado na posicao %d\n", i);
                            break;
                        }
                    }
                    if(i == tamanho){
                        printf("Elemento nao encontrado!\n");
                    }
                } else {
                    printf("O vetor esta vazio!\n");
                }
                break;

            case 5:
                printf("Saindo...\n");
                break;

            default:
                printf("Opcao invalida!\n");
        }

    }while(escolha != 5);

}
