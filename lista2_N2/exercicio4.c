// 4. **Retornar o menor valor entre dois números:**
// Crie uma função que receba 2 números e retorne o menor valor.

#include <stdio.h>

int verifMenor(int a, int b){

    if(a > b){
        printf("o menor valor é %d", b);
    }else if(a < b){
        printf("o menor valor é %d", a);
    }else if(a == b){
        printf("%d é igual a %d", a, b);
    }

}

int main(){

    int a, b;

    printf("Digite o valor de A: ");
    scanf("%d", &a);

    printf("Digite o valor de B: ");
    scanf("%d", &b);

    verifMenor(a, b);

}