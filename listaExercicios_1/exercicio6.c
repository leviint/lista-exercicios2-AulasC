//Solicite ao usuário os comprimentos dos três lados de um triângulo.
//Verifique se esses comprimentos formam um triângulo válido (ou seja, a
//soma de quaisquer dois lados deve ser maior que o terceiro lado)

#include <stdio.h>

int main(){

    int lado1, lado2, lado3;

    printf("Para formar um triângulo, a soma de qualquer dois lados devem ser maior que um dos lados");
    printf("Digite a medida dos lados de um triangulo abaixo\n");
    printf("Lado 1: ");
    scanf("%d", &lado1);
    printf("Lado 2: ");
    scanf(" %d", &lado2);
    printf("Lado 3: ");
    scanf(" %d", &lado3);

    if(lado1 + lado2 < lado3){
        puts("Triangulo invalido!");
    }else if(lado2 + lado3 < lado1){
        puts("Triangulo invalido!");
    }else if(lado3 + lado1 < lado2){
        puts("Triangulo invalido!");
    }else{
        puts("Triangulo valido!");
    }

}