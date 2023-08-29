#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
* Autor: Samuel de Mello Cagnani
*/

/* 1) Fazer um algoritmo e o programa em C para ler o nome e o salário anual de um trabalha-
dor. Este trabalhador deve pagar 10% de imposto se o seu salário anual for menor ou igual a
R$ 12.000,00. Caso o salário seja maior que este valor, o imposto devido é igual a 10% sobre
R$ 12.000,00 mais 25% sobre o que passar de R$ 12.000,00. Calcular o imposto devido pelo
trabalhador e imprimir com mensagens correspondentes. */

int main() {

    char nome[50] = {"\0"};
    float salario = 0;

    printf("\nDigite o nome do trabalhador:");
    scanf("%s", nome);
    printf("\nDigite o salario do trabalhador:");
    scanf("%f", &salario);

    if(salario <= 12000) {
        printf("\nSalario: R$%.2f", salario);
        printf("\nImposto devido: R$%.2f", salario * 0.1);
    } else {
        printf("\nSalario: R$%.2f", salario);
        printf("\nImposto devido: R$%.2f", 1200 + ((salario - 12000) * 0.25));
    }

    return 0;
}