//Jogo de Adivinhação: Implemente um jogo de adivinhação onde o programa gera um número
//aleatório e o usuário tenta adivinhar. O programa deve dar dicas se o número fornecido pelo
//usuário é maior ou menor do que o número gerado.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL));
    int numeroAleatorio = rand() % 10 + 1; //isto gera um número aleatório de 1 a 10
    int numeroUsuario;

    do{
        printf("Digite um número aleatório, você será dado dicas caso erre: ");
        scanf("%d", &numeroUsuario);
        if(numeroUsuario == numeroAleatorio){
            printf("Parabéns, você acertou o número!");
            break;
        }else{
            printf("Que pena! Seu número está entre %d e %d\n", (numeroAleatorio - 3), (numeroAleatorio + 3));
        }

    } while (numeroUsuario != numeroAleatorio);

}