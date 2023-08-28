#include <stdio.h>
#include <stdlib.h>

int main() {

    /* 4) Crie um arquivo Exercicio4.c e dentro do arquivo crie a função main. Usando alguma
    estrutura de repetição some os valores ímpares de 1 a 9 e exiba o valor final da soma. */

    int soma = 0;

    for(int i = 1; i <= 9; i++) {
        if(i % 2 == 1) {
            soma += i;
        }
    }

    printf("SOMA: %d\n", soma);

    return 0;

}