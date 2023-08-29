#include <stdio.h>
#include <stdlib.h>

/*
* Autor: Samuel de Mello Cagnani
*/

/* 4) Crie um arquivo Exercicio4.c e dentro do arquivo crie a função main. Defina uma
variável inteira denominada ddd. Usando o switch/case e com base no valor que você
atribuir a ela, mande o programa exibir o destino com base na tabela. O programa deverá
exibir “DDD não cadastrado.” se o valor atribuído à variável não estiver presente 
na tabela. */

int main() {

    int ddd = 61;

    switch (ddd)
    {
    case 11:
        printf("Sao Paulo\n");
        break;
    case 19:
        printf("Campinas\n");
        break;
    case 21:
        printf("Rio de Janeiro\n");
        break;  
    case 27:
        printf("Vitoria\n");
        break;
    case 31:
        printf("Belo Horizonte\n");
        break;
    case 32:
        printf("Juiz de Fora\n");
        break;
    case 61:
        printf("Brasilia\n");
        break;
    case 71:
        printf("Salvador\n");
        break;
    default:
        printf("DDD nao cadastrado.\n");
        break;
    }

    return 0;
}