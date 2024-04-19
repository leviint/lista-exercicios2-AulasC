//Série de Fibonacci: Escreva um programa que gere os primeiros N termos da série de
//Fibonacci, onde N é fornecido pelo usuário.

#include <stdio.h>

int main(){

    int termos, primeiro = 0, segundo = 1, proximo, i;

    printf("Digite quantos termos da série de Fibonacci você quer ver: ");
    scanf("%d", &termos);

    for(i = 0; i < termos; i++){ //(Iniciação; Condição; Incremento)
        if(i <= 1){
        proximo = i;
        }else{
            proximo = primeiro + segundo;
            primeiro = segundo;
            segundo = proximo;
        }
        printf("%d\n", proximo);

    }

}