#include <stdio.h>
#include <stdlib.h>

int main() {

    /*O programa soma os valores ímpares de 1 a 9 e exiba o valor final da soma.*/

    int soma = 0;

    for(int i = 1; i <= 9; i++) {
        if(i % 2 == 1) {
            soma += i;
        }
    }

    printf("SOMA: %d\n", soma);

    return 0;

}