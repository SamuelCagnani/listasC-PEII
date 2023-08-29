#include <stdio.h>
#include <stdlib.h>

/*
* Autor: Samuel de Mello Cagnani
*/

/* 2) Crie um arquivo Exercicio2.c e dentro do arquivo crie a função main. Defina uma variável
inteira e atribua um valor para ela. Mande o programa exibir “Eh par!” se o valor  atribuído 
for par e “Eh impar!”, caso contrário. Use o operador % para verificar se o valor é par. */

int main() {

    int numero = 7;

    if(numero % 2 == 0) {
        printf("Eh par!\n");
    } else { 
        printf("Eh impar!\n");
    }

    return 0;
}