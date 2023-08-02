#include <stdio.h>
#include <stdlib.h>

int main() {

    /*O programa exibe os múltiplos de 100 até o valor 1000.*/

    int numero = 101;

    while(numero <= 1000) {

        if(numero % 100 == 0) {
            printf("%d ", numero);
        }

        numero++;

    }

    return 0;

}