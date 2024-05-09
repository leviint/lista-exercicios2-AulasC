//13- Do While Implemente um programa que leia números do usuário até que ele digite 0, e
//então imprima a soma de todos os números digitados

#include <stdio.h>

int main(){

    int num, sum;

    printf("Digite quantos números quiser, digite apenas 0 se quiser parar o programa: ");

    do{
        printf("Digite um número: ");
        scanf("%d", &num);
        sum += num;
    }while(num != 0);

    printf("Soma de todos os números digitados: %d", sum);
}