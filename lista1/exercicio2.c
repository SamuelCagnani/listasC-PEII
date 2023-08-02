#include <stdio.h>
#include <stdlib.h>

int main() {

    /*O programa responde se o valor predeterminado é ímpar ou par.*/

    int numero = 7;

    if(numero % 2 == 0) {

        printf("Eh par!\n");

    } else {
        
        printf("Eh impar!\n");

    }

    return 0;

}