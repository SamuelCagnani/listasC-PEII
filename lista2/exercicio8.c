#include <stdio.h>
#include <stdlib.h>

int main() {

    /*O programa determina o número de algarismos de um determinado valor inteiro.*/

    int numero = 192;
    int algarismos = 0;

    while(numero != 0) {

        numero /= 10;
        algarismos++;

    }

    printf("ALGARISMOS: %d\n", algarismos);

    return 0;

}