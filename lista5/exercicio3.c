#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*
* Autor: Samuel de Mello Cagnani
*/

/* 3) Fazer um algoritmo para determinar se um dado número N (digitado pelo usuário) e ou não
primo. */

bool primo(int numero) {
    if(numero <= 1) 
    {
        return false;
    }
    int contador = 1;

    for(int i = 2; i <= numero; i++) {
        if(numero % i == 0) 
        {
            contador++;
        }
        if(contador > 2) {
            return false;
        }
    }
    return true;
}

int main() {

    int numero;

    printf("Digite um numero para determinar se ele eh primo: ");
    scanf("%d", &numero);

    if(primo(numero)) 
    {
        printf("O numero %d eh primo!\n", numero);
    }
    else 
    {
        printf("O numero %d nao eh primo.\n", numero);
    }

    return 0;
}