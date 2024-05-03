//2. **Média de elementos em um array**:dado o float array[] = {1.5, 2.5, 3.5, 4.5, 5.5} Escreva um programa
//que calcule a média dos elementos em um array de ponto flutuante.

#include <stdio.h>

int main(){

    float array[5] = {1.5, 2.5, 3.5, 4.5, 5.5};
    float sum = 0;
    
    for(int i = 0; i < 5; i++){
        sum += array[i];
    }

    printf("Soma dos elementos dessa array: %.2f\n", sum);
    printf("Média dos elementos dessa array: %.2f", sum/5);
}