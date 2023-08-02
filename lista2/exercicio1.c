#include <stdio.h>
#include <stdlib.h>

int main() {

    /*O programa exibe os números ímpares entre 0 e 100.*/

    for(int i = 0; i <= 100; i++) {

        if(i % 2 == 1) {
            printf("%d", i);
        }
        
        printf(" ");

    }

    return 0;

}