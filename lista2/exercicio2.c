#include <stdio.h>
#include <stdlib.h>

/*
* Autor: Samuel de Mello Cagnani
*/

/* 2) Crie um arquivo Exercicio2.c e dentro do arquivo crie a função main. Usando a
estrutura de repetição while exibir os múltiplos de 100 até o valor 1000. */

int main() {

    int numero = 101;

    while(numero <= 1000) {
        if(numero % 100 == 0) {
            printf("%d ", numero);
        }
        numero++;
    }

    return 0;
}