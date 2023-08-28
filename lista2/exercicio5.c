#include <stdio.h>
#include <stdlib.h>

int main() {

    /* 5) Crie um arquivo Exercicio5.c e dentro do arquivo crie a função main. Usando alguma
    estrutura de repetição imprima o 10o valor da sequencia de Fibonacci. O valor do 2o 
    elemento da sequência de Fibonacci é dado pela soma do 1o e do 0o, onde:

    • Fibonacci de 0o é 1.
    • Fibonacci de 1 o é 1.

    O valor do 3o elemento da sequência de Fibonacci é dado pela soma do 2o e do 1o e assim
    sucessivamente. */

    int n1 = 1;
    int n2 = 1;
    int aux = 0;

    for(int i = 2; i < 10; i++) {
        aux = n2;
        n2+= n1;
        n1 = aux;
    }

    printf("DECIMO VALOR FIBONACCI: %d\n", n2);

    return 0;

}