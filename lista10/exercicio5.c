#include <stdio.h>
#include <stdlib.h>

/*
* Autor: Samuel de Mello Cagnani
*/

/* 5) Fazer um programa em C que tenha a função troca, para receber dois valores
inteiros como parâmetros e trocar o conteúdo das variáveis sem utilizar uma terceira variável
auxiliar. */

void troca(int * x, int * y) {
    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;
}

int main() {

    int x, y;
    int *px = &x;
    int *py = &y;

    printf("Digite o valor de x: ");
    scanf("%d", &x);

    printf("Digite o valor de y: ");
    scanf("%d", &y);

    printf("Valor de x (antes da troca): %d\n", x);
    printf("Valor de y (antes da troca): %d\n", y);

    troca(px, py);

    printf("Valor de x (depois da troca): %d\n", x);
    printf("Valor de y (depois da troca): %d\n", y);

    return 0;
}