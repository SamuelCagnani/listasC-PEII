#include <stdio.h>
#include <stdlib.h>

/*
* Autor: Samuel de Mello Cagnani
*/

/* 5) Fazer um algoritmo para ler um número (NUM) e depois ler NUM números inteiros e imprima
o maior deles. */

int main() {

    int NUM;
    int maior = 0;
    int aux;

    printf("Digite quantos numeros voce desja ler: ");
    scanf("%d", &NUM);

    for(int i = 0; i < NUM; i++) 
    {
        printf("Numero %d: ", i + 1);
        scanf("%d", &aux);

        if(maior < aux) 
        {
            maior = aux;
        }
    }

    printf("Maior valor: %d\n", maior);

    return 0;
}