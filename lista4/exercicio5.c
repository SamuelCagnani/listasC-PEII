#include <stdio.h>
#include <stdlib.h>

/*
* Autor: Samuel de Mello Cagnani
*/

/* 5) Desenvolva um algoritmo e um programa em C de uma calculadora que contém as seguintes
operações: +, -, *, / e %, utilizando:
    (a) Comando do/while
    (b) Comando seleção/case 
*/

int main() {

    int n1, n2;
    int menu = 0;

    do
    {
        printf("\n===== Calculadora =====");
        printf("\n1 - Somar");
        printf("\n2 - Subtrair");
        printf("\n3 - Multiplicar");
        printf("\n4 - Dividir");
        printf("\n5 - Resto da Divisao");
        printf("\n6 - Desligar");

        printf("\nDigite a opcao desejada: ");
        scanf("%d", &menu);

        switch (menu)
        {
        case 1:
            printf("\nDigite o primeiro numero: ");
            scanf("%d", &n1);
            printf("\nDigite o segundo numero: ");
            scanf("%d", &n2);
            printf("\n%d + %d = %d", n1, n2, n1 + n2);
            break;
        case 2:
            printf("\nDigite o primeiro numero: ");
            scanf("%d", &n1);
            printf("\nDigite o segundo numero: ");
            scanf("%d", &n2);
            printf("\n%d - %d = %d", n1, n2, n1 - n2);
            break;
        case 3:
            printf("\nDigite o primeiro numero: ");
            scanf("%d", &n1);
            printf("\nDigite o segundo numero: ");
            scanf("%d", &n2);
            printf("\n%d * %d = %d", n1, n2, n1 * n2);
            break;
        case 4:
            printf("\nDigite o primeiro numero: ");
            scanf("%d", &n1);
            printf("\nDigite o segundo numero: ");
            scanf("%d", &n2);
            printf("\n%d / %d = %d", n1, n2, n1 / n2);
            break;
        case 5:
            printf("\nDigite o primeiro numero: ");
            scanf("%d", &n1);
            printf("\nDigite o segundo numero: ");
            scanf("%d", &n2);
            printf("\n%d %% %d = %d", n1, n2, n1 % n2);
            break;
        case 6:
            printf("\nDesligando...");
            break;
        default:
            printf("\nOpcao invalida, digite novamente!");
            break;
        }
    } while (menu != 6);
    
    return 0;
}