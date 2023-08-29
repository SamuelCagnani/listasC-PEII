#include <stdio.h>
#include <stdlib.h>

/*
* Autor: Samuel de Mello Cagnani
*/

/* 10) Desenvolva o algoritmo e o programa em C que determine a média aritmética de 10 ele-
mentos reais. */

int main() {

    float elementos[10] = {0};

    for(int i = 0; i < 10; i++) {
        printf("Digite o elemento %d: ", i + 1);
        scanf("%f", &elementos[i]);
        if(i > 0) {
            elementos[0] += elementos[i];
        }
    } 

    printf("\nMedia aritmetica: %.2f", elementos[0] / 10);

    return 0;
}