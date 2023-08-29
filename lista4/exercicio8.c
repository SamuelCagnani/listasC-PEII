#include <stdio.h>
#include <stdlib.h>

/*
* Autor: Samuel de Mello Cagnani
*/

/* 8) Faça um algoritmo e um programa em C que determine o maior e o menor de 3 números
fornecidos pelo usuário. */

int main() {

    int num1, num2, num3;
    int swap = 0;

    printf("\nDigite os 3 numeros sequencialmente (<n1> <n2> <n3>):");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 > num2) {
        swap = num1;
        num1 = num2;
        num2 = swap;
    } 
    if (num2 > num3) {
        swap = num2;
        num2 = num3;
        num3 = swap;
    }
    if (num1 > num2) {
        swap = num1;
        num1 = num2;
        num2 = swap;
    }

    printf("\nMaior numero: %d", num3);
    printf("\nMenor numero: %d", num1);

    return 0;
}