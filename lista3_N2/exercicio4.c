// Exercício 4: Funções que Retornam Structs
// Objetivo: Definir uma struct para representar uma data e uma função que cria uma nova data
// adicionando um número de dias a uma data existente.

// Passos:
// 1 Defina uma struct Data com três campos: dia, mes e ano (todos do tipo int).
// 2 Implemente uma função adicionarDias que recebe uma Data e um número de dias
// e retorna uma nova Data com os dias adicionados.
// 3 No main, crie uma data, chame a função para adicionar dias, e imprima a nova data.

#include <stdio.h>

typedef struct{
    int dia;
    int mes;
    int ano;
}Data;

//Considerando que todos os meses do ano possuem 31 dias, para facilitar a vida
Data adicionarDias(Data data, int dias){
    data.dia += dias;

    while(data.dia > 31){
        data.dia -= 31;
        data.mes++;

        if(data.mes > 12){
            data.mes = 1;
            data.ano++;
        }
    }

    return data;
}

int main(){
    Data dataInicial = {25, 5, 2024};
    int diasParaAdicionar = 10;

    Data novaData = adicionarDias(dataInicial, diasParaAdicionar);

    printf("Data inicial: %02d/%02d/%d\n", dataInicial.dia, dataInicial.mes, dataInicial.ano);
    printf("Nova data: %02d/%02d/%d\n", novaData.dia, novaData.mes, novaData.ano);

    return 0;
}


