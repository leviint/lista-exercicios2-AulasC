//Peça ao usuário quantos alunos há na sala. Em seguida, através de um
//laço while, peça ao usuário para inserir as notas de todos os alunos da
//sala, um por vez. Por fim, o programa deve calcular e mostrar a média aritmética da turma.

#include <stdio.h>

int main(){

    int qntAlunos, media, i = 0, nota = 0, somaNota = 0;

    puts("Quantos alunos existem na turma?");
    scanf("%d", &qntAlunos);

   while (i <= qntAlunos){
    printf("Digite a nota do aluno %d", i);
    scanf("%d", &nota);

    somaNota += nota;
    i++;
   }

    media = somaNota/qntAlunos;

    printf("Soma das notas: %d\n", somaNota);
    printf("Media da turma: %d\n", media);

}