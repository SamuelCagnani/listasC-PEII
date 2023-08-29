#include <stdio.h>
#include <stdlib.h>

/*
* Autor: Samuel de Mello Cagnani
*/

/* 1) Fazer um algoritmo para receber dois valores numéricos do tipo inteiro e calcular a soma
dos dois números. O algoritmo deve mostrar os dois valores lidos e o resultado da operação com
respectivas mensagens. */

int main() {

    int n1, n2;

    printf("\nDigite sequencialmente os valores que serao somados (<n1> <n2>):");
    scanf("%d %d", &n1, &n2);

    printf("\nN1: %d", n1);
    printf("\nN2: %d", n2);
    printf("\nSoma: %d", n1 + n2);

    return 0;
}