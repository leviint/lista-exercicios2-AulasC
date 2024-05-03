#include <stdio.h>
#include <string.h>

int main(){

    char escolha[10];
    int nota = 0;

    puts("Isso é um questionário, responda as perguntas digitando a opção correta: ");

// Questão 1
    printf("\nQuestão 1: Qual é a sintaxe correta para declarar uma variável inteira em C?\n");
    printf("a) int x;\n");
    printf("b) var x;\n");
    printf("c) integer x;\n");
    printf("d) número x;\n");

    scanf("%s", escolha);

    if(strcmp(escolha, "a") == 0){
        printf("Resposta correta! Próxima pergunta:\n");
        nota++;
    }else{
        printf("Resposta errada, que pena!");
    }

// Questão 2
    printf("\nQuestão 2: Qual é a função usada para imprimir no console em C?\n");
    printf("a) print();\n");
    printf("b) console.log();\n");
    printf("c) printtext();\n");
    printf("d) printf();\n");

    scanf("%s", escolha);

    if(strcmp(escolha, "d") == 0){
        printf("Resposta correta! Próxima pergunta:\n");
        nota++;
    }else{
        printf("Resposta errada, que pena!");
    }

// Questão 3
    printf("\nQuestão 3: O que o operador '==' faz em C?\n");
    printf("a) Atribui um valor a uma variável.\n");
    printf("b) Compara dois valores.\n");
    printf("c) Divide dois valores.\n");
    printf("d) Multiplica dois valores.\n");

    scanf("%s", escolha);

    if(strcmp(escolha, "b") == 0){
        printf("Resposta correta! Próxima pergunta:\n");
        nota++;
    }else{
        printf("Resposta errada, que pena!");
    }
    
// Questão 4
    printf("\nQuestão 4: Qual é o operador lógico para 'OU' em C?\n");
    printf("a) &&\n");
    printf("b) ||\n");
    printf("c) !\n");
    printf("d) <>\n");

    scanf("%s", escolha);

    if(strcmp(escolha, "b") == 0){
        printf("Resposta correta! Próxima pergunta:\n");
        nota++;
    }else{
        printf("Resposta errada, que pena!");
    }
    
// Questão 5
    printf("\nQuestão 5: Qual é a estrutura de controle usada para repetição em C?\n");
    printf("a) if\n");
    printf("b) switch\n");
    printf("c) for\n");
    printf("d) else\n");

    scanf("%s", escolha);

    if(strcmp(escolha, "c") == 0){
        printf("Resposta correta! Próxima pergunta:\n");
        nota++;
    }else{
        printf("Resposta errada, que pena!");
    }
    
// Questão 6
    printf("\nQuestão 6: Qual é a função usada para ler um número inteiro do teclado em C?\n");
    printf("a) read_integer();\n");
    printf("b) input_int();\n");
    printf("c) scanf();\n");
    printf("d) get_int();\n");

    scanf("%s", escolha);

    if(strcmp(escolha, "c") == 0){
        printf("Resposta correta! Próxima pergunta:\n");
        nota++;
    }else{
        printf("Resposta errada, que pena!");
    }
    
// Questão 7
    printf("\nQuestão 10: Qual é o valor da expressão 5 + 3 * 2 em C?\n");
    printf("a) 16\n");
    printf("b) 11\n");
    printf("c) 13\n");
    printf("d) 10\n");

    scanf("%s", escolha);

    if(strcmp(escolha, "b") == 0){
        printf("Resposta correta! Próxima pergunta:\n");
        nota++;
    }else{
        printf("Resposta errada, que pena!\n");
    }
    
    printf("A sua nota foi: %d\n", nota);

    if(nota == 7){
        printf("Você obteve nota máxima!");
    }

}