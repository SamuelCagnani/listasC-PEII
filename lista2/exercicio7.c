#include <stdio.h>
#include <stdlib.h>

int main() {

    /*O programa exibe a soma da repetição 1/2 + 3/5 + 5/8 + 7/11 + 9/14 + 11/17.*/

    float numerador = 1;
    float denominador = 2;
    float soma = 0;

    for(int i = 0; i < 6; i++) {

        soma += (numerador / denominador);
        numerador += 2;
        denominador +=3;

    }

    printf("SOMA: %.2f\n", soma);

    return 0;

}