#include <stdio.h>
#include <stdlib.h>

int main() {

    /*O programa compara dois valores predefinidos e responde qual deles é o maior ou se são iguais.*/

    float n1 = 3.14;
    float n2 = 5.18;

    if(n1 > n2) {
        printf("%.2f eh maior que %.2f\n", n1 , n2);  
    } else if(n1 < n2) {
        printf("%.2f eh maior que %.2f\n", n2, n1);
    } else {
        printf("Os valores são iguais!");
    }

    return 0;

}