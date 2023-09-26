#include <stdio.h>
#include <stdlib.h>

/*
* Autor: Samuel de Mello Cagnani
*/

/* 3) Crie um arquivo Exercicio3.c e dentro do arquivo crie a função main. Defina duas
variáveis do tipo float e atribua um valor para cada uma delas. Mande o programa exibir qual
delas é maior. */

int main() {

    float n1 = 3.14;
    float n2 = 5.18;

    if(n1 > n2) 
    {
        printf("%.2f eh maior que %.2f\n", n1 , n2);  
    } 
    else if(n1 < n2) 
    {
        printf("%.2f eh maior que %.2f\n", n2, n1);
    } 
    else 
    {
        printf("Os valores são iguais!");
    }

    return 0;
}