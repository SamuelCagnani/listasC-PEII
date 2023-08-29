#include <stdio.h>
#include <stdlib.h>

/*
* Autor: Samuel de Mello Cagnani
*/

/* 7) Crie um arquivo Exercicio7.c e dentro do arquivo crie a função main. Usando alguma
estrutura de repetição determine qual é a soma da sequência abaixo:

1/2 + 3/5 + 5/8 + 7/11 + 9/14 + 11/17 */

int main() {

    float numerador = 1;
    float denominador = 2;
    float soma = 0;

    for(int i = 0; i < 6; i++) {
        soma += (numerador / denominador);
        numerador += 2;
        denominador +=3;
    }

    printf("SOMA: %.2f\n", soma);

    return 0;
}