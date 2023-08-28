#include <stdio.h>
#include <stdlib.h>

int main() {

    /* 1) Crie um arquivo Exercicio1.c e dentro do arquivo crie a função main. Usando a
    estrutura de repetição for exibir os números ímpares de 0 a 100. */

    for(int i = 0; i <= 100; i++) {
        if(i % 2 == 1) {
            printf("%d", i);
        } 
        printf(" ");
    }

    return 0;

}