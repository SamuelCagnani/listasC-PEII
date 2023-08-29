#include <stdio.h>
#include <stdlib.h>

/*
* Autor: Samuel de Mello Cagnani
*/

/* 7) Considere que uma escola realiza 4 provas bimestrais em 1 ano. Faça um algoritmo e um
programa em C que leia as 3 primeiras notas (N1, N2, N3) e indique se o aluno já está aprovado
no 3o bimestre ou precisa realizar a 4a prova. Sabe-se que a média nesta escola é 6,0. */

int main() {

    float n1, n2, n3;

    printf("Digite as 3 primeiras notas sequencialmente (<n1> <n2> <n3>):");
    scanf("%f %f %f", &n1, &n2, &n3);

    if((n1 + n2 + n3) >= 24) {
        printf("\nO aluno esta aprovado no 3o bimestre.");
    } else {
        printf("\nO aluno precisa fazer a 4a prova.");
    }

    return 0;
}