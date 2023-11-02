#include <stdio.h>
#include <stdlib.h>

#define LENGHT 20

/*
* Autor: Samuel de Mello Cagnani
*/

/* 2) Escreva um algoritmo que leia um vetor de 20 posições e mostre-o. Em seguida, troque
o primeiro elemento com o último, o segundo com o penúltimo, o terceiro com o
antepenúltimo, e assim sucessivamente. Mostre o novo vetor depois da troca. */

int main() {

    int vetor[LENGHT];

    for(int i = 0; i < LENGHT; i++) 
    {
        printf("vetor[%d]: ", i);
        scanf("%d", &vetor[i]);
    }

    printf("\n\nInvertendo...\n\n\n");

    for(int i = 0; i < LENGHT / 2; i++)
    {
        int aux;
        int cont = LENGHT - 1;
        aux = vetor[((LENGHT - 1) - i)];
        vetor[((LENGHT - 1) - i)] = vetor[i];
        vetor[i] = aux;
    }

    for(int i = 0; i < LENGHT; i++)
    {
        printf("vetor[%d]: %d\n", i, vetor[i]);
    }

    return 0;
}