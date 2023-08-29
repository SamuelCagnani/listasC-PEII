#include <stdio.h>
#include <stdlib.h>

/*
* Autor: Samuel de Mello Cagnani
*/

/* 4) Fazer um algoritmo e o programa em C para calcular e mostrar o salário mensal de uma
pessoa, determinado pelas condições que seguem. Se o número de horas trabalhado for inferior
a 40, a pessoa recebe R$ 8,00 por hora, senão a pessoa recebe R$ 320,00 mais R$ 12,00 para
cada hora trabalhada acima de 40 horas. O algoritmo deve pedir o número de horas trabalhadas
e deve dar o salário como saída, com respectiva mensagem. */

int main() {

    float horas = 0;

    printf("\nDigite a quantidade de horas trabalhadas: ");
    scanf("%f", &horas);

    if(horas < 40) {
        printf("\nSalario: R$%.2f", horas * 8);
    } else {
        printf("\nSalario: R$%.2f", 320 + ((horas - 40) * 12));
    }

    return 0;
}