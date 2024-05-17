// 1. **Verificar se um valor é nulo:** Crie uma função que receba um valor e
// informe se ele é positivo ou não.

#include <stdio.h>

int verificaValor(int num){
    if(num > 0){
        printf("Este número é positivo.");
    }else if(num < 0){
        printf("Este número é negativo");
    }else if(num == 0){
        printf("Esse número é 0");
    }else{
        printf("Esse número não existe");
    }
}

int main(){

    int numero;

    printf("Digite um número para verificar se ele é positivo ou não: ");
    scanf("%d", &numero);

    verificaValor(numero);

}
