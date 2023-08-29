#include <stdio.h>
#include <stdlib.h>

/*
* Autor: Samuel de Mello Cagnani
*/

/* 11) Fazer um algoritmo que permita ao usuário escolher que tipo de média deseja calcular a
partir de 3 notas lidas. Calcular a média escolhida e imprimir com respectiva mensagem.
    (a) aritmética;
    (b) ponderada(3,3,4);
    (c) harmônica. 
*/

int main() {

    float n1, n2, n3;
    int menu = 0;

    printf("Digite as 3 notas sequencialmente (<n1> <n2> <n3>):");
    scanf("%f %f %f", &n1, &n2, &n3);

    do
    {
        printf("\n===== Menu =====");
        printf("\n1 - Media Aritmetica");
        printf("\n2 - Media Ponderada (3,3,4)");
        printf("\n3 - Media Harmonica");
        printf("\n4 - Sair");

        printf("\nDigite a opcao desejada: ");
        scanf("%d", &menu);

        switch (menu)
        {
        case 1:
            printf("\nMedia aritmetica: %.2f", (n1 + n2 + n3) / 3);
            break;
        case 2:
            printf("\nMedia ponderada: %.2f", ((n1 * 3) + (n2 * 3) + (n3 * 4)) / 10);
            break;
        case 3:
            printf("\nMedia harmonica: %.2f", 3 / ((1/n1) + (1/n2) + (1/n3)));
            break;
        case 4:
            printf("\nSaindo...");
            break;
        default:
            printf("\nOpcao invalida, digite novamente!");
            break;
        }
    } while (menu != 4);

    return 0;
}