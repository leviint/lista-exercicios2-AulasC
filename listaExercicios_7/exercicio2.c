//2- Variáveis e Operadores aritméticos Crie um programa que calcule a média aritmética
//de três notas e determine se o aluno está aprovado (média >= 6)

#include <stdio.h>

int main(){

    int nota1, nota2, nota3;
    int qntMaterias = 3;

    printf("Digite a nota em Matemática: ");
    scanf("%d", &nota1);

    printf("Digite a nota em Português: ");
    scanf("%d", &nota2);

    printf("Digite a nota em Ciências: ");
    scanf("%d", &nota3);

    int soma = nota1 + nota2 + nota3;

    printf("A soma das notas é igual a %d\n", soma);

    int media = soma / qntMaterias;
    printf("A média dessas notas é %d\n", media);

    if(media >= 6){
        printf("O aluno foi aprovado.");
    }else{
        printf("O aluno está reprovado.");
    }

}