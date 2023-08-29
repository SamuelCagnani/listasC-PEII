#include <stdio.h>
#include <stdlib.h>

/*
* Autor: Samuel de Mello Cagnani
*/

/* 6) Crie um arquivo Exercicio6.c e dentro do arquivo crie a função main. Usando alguma
estrutura de repetição determine qual é o fatorial de 5. Sabe-se que o fator de 5 é dado por:
5*4*3*2*1. */

int main() {

    int fatorial = 1;

    for(int i = 5; i > 0; i--) {
        fatorial *= i;
    }

    printf("FATORIAL DE 5: %d\n", fatorial);

    return 0;
}