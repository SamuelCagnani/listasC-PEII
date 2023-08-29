#include <stdio.h>
#include <stdlib.h>

/*
* Autor: Samuel de Mello Cagnani
*/

/* 2) Fazer um algoritmo e o programa em C para ler 3 números e mostrá-los em ordem crescente. */

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

    printf("\nOrdem crescente: %d, %d, %d.", num1, num2, num3);

    return 0;
}