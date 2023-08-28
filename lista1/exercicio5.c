#include <stdio.h>
#include <stdlib.h>

int main() {

    /* 5) Crie um arquivo Exercicio5.c e dentro do arquivo crie a função main. Defina uma variável 
    inteira denominada mes. Com base no valor atribuído a variável imprima o nome do mês 
    correspondente. Por exemplo, se o valor for igual a 4 então o programa deverá exibir “Abril.”.
    Se um valor igual a 13 for atribuído a variável, então o programa deverá exibir “Valor inválido.”. */

    int mes = 15;

    switch (mes)
    {
    case 1:
        printf("Janeiro\n");
        break;
    case 2:
        printf("Fevereiro\n");
        break;
    case 3:
        printf("Março\n");
        break;
    case 4:
        printf("Abril\n");
        break;
    case 5:
        printf("Maio\n");
        break;
    case 6:
        printf("Junho\n");
        break;
    case 7:
        printf("Julho\n");
        break;
    case 8:
        printf("Agosto\n");
        break;
    case 9:
        printf("Setembro\n");
        break;
    case 10:
        printf("Outubro\n");
        break;
    case 11:
        printf("Novembro\n");
        break;
    case 12:
        printf("Dezembro\n");
        break;
    default:
        printf("Valor invalido.\n");
        break;
    }

    return 0;

}