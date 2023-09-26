#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
* Autor: Samuel de Mello Cagnani
*/

/* 1) Fazer um programa em C com a função potencia que recebe dois números
inteiros x e y por parâmetro e retorna o valor de x elevado a y. */

double potencia(int x, int y) {

    double resultado = pow(x, y);

    return resultado;
}

int main() {

    int x, y;

    printf("Digite o inteiro x: ");
    scanf("%d", &x);
    printf("Digite o inteiro y: ");
    scanf("%d", &y);

    printf("%d^%d = %.2lf\n", x, y, pow(x, y));

    return 0;
}