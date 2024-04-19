//Cálculo de Média Ponderada: Solicite ao usuário que insira as notas e os pesos
//correspondentes, e então calcule a média ponderada

#include <stdio.h>

int main(){

    int qntNumeros, media, peso, pesoMult, i = 0, numeros, somaNumeros = 0;

    printf("Digite quantos números você deseja inserir no cálculo da média ponderada: ");
    scanf("%d", &qntNumeros);

    while(i < qntNumeros){
        printf("Digite o %d° Número: ", i + 1);
        scanf("%d", &numeros);
        printf("Digite o peso desse número: ");
        scanf("%d", &peso);


    pesoMult = numeros * peso;
    somaNumeros += pesoMult;
    i++;
    }    

    media = somaNumeros/qntNumeros;

    printf("Soma dos números: %d\n", somaNumeros);
    printf("Média dos números: %d\n", media);

}