#include <stdio.h>
#include <stdlib.h>

int main() {

    /*O programa imprime operações matemáticas básicas com números predefinidos, 
    vale ressaltar que para maior exatidão nas divisões seria necessário utilizar 
    o tipo float.*/

    int n1 = 10;
    int n2 = 10;

    printf("N1 = %d\n", n1);
    printf("N2 = %d\n", n2);

    printf("SOMA: %d\n", n1 + n2);
    printf("MULTIPLICACAO: %d\n", n1 * n2);
    printf("DIVISAO: %d\n", n1 / n2);
    printf("SUBTRACAO: %d\n", n1 - n2);

    return 0;

}