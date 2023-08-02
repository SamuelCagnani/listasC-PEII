#include <stdio.h>
#include <stdlib.h>

int main() {

    /*O programa imprime imprima o décimo valor da sequencia de Fibonacci (pode ser alterado mudando a condição do for).*/

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