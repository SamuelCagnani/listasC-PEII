#include <stdio.h>
#include <stdlib.h>

/*
* Autor: Samuel de Mello Cagnani
*/

/* 8) Crie um arquivo Exercicio8.c e dentro do arquivo crie a função main. Usando alguma
estrutura de repetição determine o número de algarismos de um determinado valor inteiro. Para
determinar o número de algarismos de um inteiro pode-se realizar divisões consecutivas por 10 e
considerar a parte inteira da divisão. Quando o valor for zero finaliza-se o algortimos. A resposta
será a quantidade de divisões feitas. */

int main() {

    int numero = 192;
    int algarismos = 0;

    while(numero != 0) {
        numero /= 10;
        algarismos++;
    }

    printf("ALGARISMOS: %d\n", algarismos);

    return 0;
}