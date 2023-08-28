#include <stdio.h>
#include <stdlib.h>

int main() {

    /* 3) Crie um arquivo Exercicio3.c e dentro do arquivo crie a função main. Usando a estrutura 
    de repetição do...while exibir os números que terminam com o algarismo 5 começando em 100 
    e indo até -100. */

    int numero = 100;

    do
    {
        if((numero % 10 == 5) || (numero % 10 == -5)) {
            printf("%d ", numero);
        }
        numero--;
    } while (numero >= -100);

    return 0;

}