#include <stdio.h>
#include <stdlib.h>

int main() {

    /*O programa determina o fatorial de 5 (pode ser alterado na condição do for).*/

    int fatorial = 1;

    for(int i = 5; i > 0; i--) {
        fatorial *= i;
    }

    printf("FATORIAL DE 5: %d\n", fatorial);

    return 0;

}