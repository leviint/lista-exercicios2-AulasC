//Peça ao usuário seu peso (em kg) e altura (em metros). Calcule o Índice
//de Massa Corporal (IMC) e imprima a categoria correspondente (abaixo do peso, normal, sobrepeso, obeso).
//IMC = peso/(altura x altura)

//Menor que 18,5 	Magreza 	0
//Entre 18,5 e 24,9 	Normal 	0
//Entre 25,0 e 29,9 	Sobrepeso 	I
//Entre 30,0 e 39,9 	Obesidade 	II
//Maior que 40,0 	Obesidade Grave 	III

#include <stdio.h>

int main(){

    float weight, height, IMC = weight / (height * height);

    printf("Digite o seu peso, em Kg:\n");
    scanf("%.2f", &weight);
    printf("Seu peso: %.2f\n", weight);

    printf("Digite a sua altura, em metros:\n");
    scanf(" %.2f", &height);
    printf("Sua altura: %.2f\n", height);

    printf("Seu IMC é equivalente a %.2f\n", IMC);

    if(IMC < 18.5){
        printf("Status corporal: Magreza");
    }else if(18.5 <= IMC <= 24.9){
        printf("Status corporal: Normal");
    }else if(25.0 <= IMC <= 29.9){
        printf("Status corporal: Sobrepeso");
    }else if(30.0 <= IMC <= 39.9){
        printf("Status corporal: Obesidade");
    }else if(IMC >= 40){
        printf("Status corporal: Obesidade Grave");
    }else{
        printf("Erro! Tente novamente.");
    }

    return 0;
}