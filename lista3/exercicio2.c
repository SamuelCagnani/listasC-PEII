#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
* Autor: Samuel de Mello Cagnani
*/

/* 2) Fazer um algoritmo para ler dois valores correspondentes aos lados de um retângulo, calcular
a área, o perímetro e a diagonal da figura e mostrar os valores lidos e os calculados com respectivas
mensagens. */

int main() {

    float lado1, lado2;

    printf("\nDigite o valor dos lados, respectivamente (<lado1> <lado2>):");
    scanf("%f %f", &lado1, &lado2);

    printf("\nLado 1: %.2f", lado1);
    printf("\nLado 2: %.2f", lado2);
    printf("\nArea: %.2f", lado1 * lado2);
    printf("\nPerimetro: %.2f", 2 * (lado1 + lado2));
    printf("\nDiagonal: %.2f", sqrt(pow(lado1, 2) + pow(lado2, 2)));

    return 0;
}