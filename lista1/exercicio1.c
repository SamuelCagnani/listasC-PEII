#include <stdio.h>
#include <stdlib.h>

int main() {

    /* 1) Crie um arquivo Exercicio1.c e dentro do arquivo crie a função main. Defina duas
    variáveis inteiras e atribua um valor para cada uma delas. Mande o programa exibir o valor da
    soma, multiplicação, divisão e subtração. */

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