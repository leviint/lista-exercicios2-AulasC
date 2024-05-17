// 5. **Retornar o maior valor entre 3 números:**
// Crie uma função que receba 3 números e retorne o maior valor, utilizando a função da questão 4

#include <stdio.h>

int verifMaior(int a, int b, int c){

    if(a > b && a > c){
        printf("o maior valor é %d", a);
    }else if(b > a && b > c){
        printf("o maior valor é %d", b);
    }else if (c > a && c > b){
        printf("o maior valor é %d", c);
    }else if(a == b && a == c){
        printf("Todos os valores são idênticos");
    }

}

int main(){

    int a, b, c;

    printf("Digite o valor de A: ");
    scanf("%d", &a);

    printf("Digite o valor de B: ");
    scanf("%d", &b);

    printf("Digite o valor de C: ");
    scanf("%d", &c);

    verifMaior(a, b, c);

}