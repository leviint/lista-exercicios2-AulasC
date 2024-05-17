// 2. **Equação do segundo grau:** Crie uma função que receba três
// valores, 'a', 'b' e 'c', que são os coeficientes de uma equação do segundo
// grau, e retorne o valor do delta, dado por Delta = b^2 - 4ac.

#include <stdio.h>

int bhaskara(int a, int b, int c){

    return b*b - 4 * a * c;

}

int main(){

    int a, b, c;

    printf("Digite o valor de A: ");
    scanf("%d", &a);

    printf("Digite o valor de B: ");
    scanf("%d", &b);

    printf("Digite o valor de C: ");
    scanf("%d", &c);

    printf("Valor de delta: %d", bhaskara(a,b,c));

}