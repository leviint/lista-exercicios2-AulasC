// 7. **Simular um dado de 6 faces:**
// Crie uma função chamada `Dado()` que retorne, através de sorteio, um número de 1 até 6.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Dado(){

    srand(time(NULL));
    return (rand() % 6) + 1;

}

int main(){

    int numeroSorteado = Dado();

    printf("DADO VIRTUAL\nNúmero sorteado: %d", numeroSorteado);
    
}