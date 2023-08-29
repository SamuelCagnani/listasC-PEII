#include <stdio.h>
#include <stdlib.h>

/*
* Autor: Samuel de Mello Cagnani
*/

/* 9) Uma pessoa adquiriu um terreno retangular e para demarcar sua propriedade irá cercá-lo.
No interior do terreno será feito o plantio de grama. Sabendo-se que o custo por metro de cerca
é de R$ 12,00 e que o metro quadrado da grama custa R$ 8,50, o proprietário quer saber qual
será o custo total com essas duas melhorias em seu terreno. Faça um algoritmo e um programa
em C para dar a solução ao proprietário. */

int main() {

    float ladoMaior, ladoMenor;

    printf("\nDigite o lado maior do terreno: ");
    scanf("%f", &ladoMaior);
    printf("\nDigite o lado menor do terreno: ");
    scanf("%f", &ladoMenor);

    printf("\nCusto total de cercas: R$%.2f", ((ladoMaior + ladoMenor) * 2) * 12);
    printf("\nCusto total de grama: R$%.2f", (ladoMaior * ladoMenor) * 8.50);
    printf("\nCusto geral: R$%.2f", (((ladoMaior + ladoMenor) * 2) * 12) + ((ladoMaior * ladoMenor) * 8.50));

    return 0;
}