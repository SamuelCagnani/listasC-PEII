#include <stdio.h>
#include <stdlib.h>

/*
* Autor: Samuel de Mello Cagnani
*/

/* 2) Fazer um algoritmo para determinar todos os divisores de um dado número N (digitado pelo
usuário). */

int main() {

    int N = 0;

    printf("Digite um numero para determinar seus divisores: ");
    scanf("%d", &N);

    printf("NUMERO: %d\n", N);
    printf("DIVISORES:");

    for(int i = 1; i <= N; i++) 
    {
        if(N % i == 0) {
            printf(" %d", i);
        }
    }
    printf("\n");

    return 0;
}