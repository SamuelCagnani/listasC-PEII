#include <stdio.h>
#include <stdlib.h>

/*
* Autor: Samuel de Mello Cagnani
*/

/* 6) Desenvolver um algoritmo e um programa que calcule e imprima o custo de transporte de
um frete. O algoritmo ou o programa deverá ler do teclado o valor de custo FIXO do transporte
e o destino do frete e calcular o valor do frete de acordo com a tabela. */

int main() {

    float custoFixo;
    int destino;  

    printf("\nDigite o custo fixo de transporte:");
    scanf("%f", &custoFixo);

    do
    {
        printf("\nDigite o codigo do destino (1 a 4):");
        scanf("%d", &destino); 

        switch (destino)
        {
        case 1:
            custoFixo *= 0.5;
            break;
        case 2:
            custoFixo *= 0.3;
            break;
        case 3:
            custoFixo *= 0.8;
            break;
        case 4:
            custoFixo *= 1.5;
            break;
        default:
            printf("\nCodigo invalido, digite novamente!");
            destino = -1;
            break;
        }
    } while (destino == -1);

    printf("\nValor do frete: %.2f", custoFixo);
    
    return 0;
}