#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
* Autor: Samuel de Mello Cagnani
*/

/* 3) Os alunos da Escola Fundamental São Jorge submetem-se a três avaliações anuais em cada
disciplina. Fazer um algoritmo para ler o nome da disciplina, o nome do aluno e as notas obtidas
nas avaliações e, em seguida, calcular a nota final do aluno, sabendo que a primeira avaliação
tem peso 2; a segunda tem peso 3 e a terceira tem peso 5. Os resultados devem ser mostrados da
seguinte maneira:

    Escola de Ensino Fundamental São Jorge
    Resultado Final de aa-----------aa (nome da disciplina)
    Aluno: aa-----------aa (nome do aluno)
    Primeira avaliação: xx.xx
    Segunda avaliação: xx.xx
    Terceira avaliação: xx.xx
    Nota final: xx.xx 
*/

int main() {


    char disciplina[50] = {"\0"};
    char aluno[50] = {"\0"};
    float n1, n2, n3;

    printf("\nDigite o nome da disciplina:");
    scanf("%s", disciplina);
    printf("\nDigite o nome do aluno:");
    scanf("%s", aluno);
    printf("\nDigite a notas sequencialmente (<n1> <n2> <n3>):");
    scanf("%f %f %f", &n1, &n2, &n3);

    printf("\nEscola de Ensino Fundamental Sao Jorge\n");
    printf("\nResultado Final de %s", disciplina);
    printf("\nAluno: %s", aluno);
    printf("\nPrimeira avaliacao: %.2f", n1);
    printf("\nSegunda avaliacao: %.2f", n2);
    printf("\nTerceira avaliacao: %.2f", n3);
    printf("\nNota final: %.2f", ((n1*2) + (n2*3) + (n3*5)) / 10);

    return 0;
}