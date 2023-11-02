#include <stdio.h>
#include <stdlib.h>

#define CLIENTES 50

/*
* Autor: Samuel de Mello Cagnani
*/

/* 1) Uma locadora de vídeos tem guardada, em um vetor de 50 posições, a quantidade de
filmes retirados por seus clientes durante o ano de 2017. Agora, esta locadora está fazendo
uma promoção e, para cada 10 filmes retirados, o cliente tem direito a uma locação grátis.
Faça um algoritmo que crie outro vetor contendo a quantidade de locações gratuitas a que
cada cliente tem direito. */

void buscaLocacaoGratis(int *);

int main() {

    int locacoesClientes[CLIENTES] = {80, 411, 42, 33, 94, 58, 26, 17, 78, 59, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19,
                                20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 33, 94, 58, 26, 17, 78, 59, 10, 11, 
                                80, 111, 42, 33, 94, 58, 27, 28, 29, 30};
    int locacoesGratis[CLIENTES];

    for(int i = 0; i < CLIENTES; i++) 
    {
        locacoesGratis[i] = locacoesClientes[i] / 10;
    }

    int menu;

    do 
    {
        printf("---------- MENU ----------\n");
        printf("1 - Analisar locacoes gratis\n");
        printf("0 - Sair\n");

        printf("\nOpcao: ");
        scanf("%d", &menu);

        switch (menu)
        {
        case 1:
            buscaLocacaoGratis(&locacoesGratis);
            break;
        case 0:
            printf("Saindo...\n");
            break;
        default:
            printf("Codigo invalido!\n");
            break;
        }

    } while(menu != 0);


    return 0;
}

void buscaLocacaoGratis(int * locacoesGratis) {

        int numeroCliente;
        printf("Digite o codigo do cliente: ");
        scanf("%d", &numeroCliente);

        if(numeroCliente < 1 || numeroCliente > 50) 
        {
            printf("Numero invalido. Digite um valor entre 1 e 50.\n");
        } 
        else
        {
            printf("O cliente tem direito a %d locacoes gratuitas.\n", locacoesGratis[numeroCliente - 1]);
        }
}