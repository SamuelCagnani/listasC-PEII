#include <stdio.h>
#include <stdlib.h>

int main() {

    /*O programa exibe os números que terminam com o algarismo 5 começando em 100 indo até -100.*/

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