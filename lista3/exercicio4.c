#include <stdio.h>
#include <stdlib.h>

/*
* Autor: Samuel de Mello Cagnani
*/

/* 4) A Lanchonete Come Aqui, Tomba Ali possui, em seu cardápio, apenas 3 itens (hamburguer,
refrigerante e batata frita). Fazer um algoritmo para ler o nome e a quantidade de itens pedidos
por um cliente (sabendo que o hamburguer custa R$ 2,00, o refrigerante custa R$ 1,00 e a batata
frita R$ 0,50). O algoritmo deve calcular o valor total do pedido e emitir uma nota fiscal da
seguinte maneira: */ 

int main() {

    float hamburguer, refrigerante, batataFrita;
    int menu = 0;

    do
    {
        printf("\n========Menu========");
        printf("\n1 - Hamburguer - R$ 2,00");
        printf("\n2 - Refrigerante - R$ 1,00");
        printf("\n3 - Batata Frita - R$0,50");
        printf("\n4 - Finalizar pedido");
        printf("\n0 - Sair");
        printf("\n\nDigite o codigo do produto/operacao:");
        scanf("%d", &menu);

        switch (menu)
        {
        case 1:
            printf("Digite a quantidade de hamburguer: ");
            scanf("%f", &hamburguer);
            break;
        case 2:
            printf("Digite a quantas latas de refrigerante: ");
            scanf("%f", &refrigerante);
            break;
        case 3:
            printf("Digite a quantidade de batatas fritas: ");
            scanf("%f", &batataFrita);
            break;
        case 4:
            printf("\nEmitindo nota fiscal...");
            break;
        case 0:
            printf("\nSaindo...");
            break;
        default:
            printf("\nCodigo invalido, digite novamente.");
            break;
        }
    } while (menu != 0 && menu != 4);

    if(menu == 4) 
    {

        printf("\nLanchonete Come Aqui, Tomba Ali");
        printf("\n| Item |  Descricao  | Qtde| Valor");
        printf("\n|  01  |  Hamburguer | %.0f | R$%.2f", hamburguer, hamburguer * 2);
        printf("\n|  02  | Refrigerante| %.0f | R$%.2f", refrigerante, refrigerante);
        printf("\n|  03  | Batata Frita| %.0f | R$%.2f", batataFrita, batataFrita * 0.5);
        printf("\n| Total|             |    | R$%.2f", (hamburguer * 2) + (refrigerante) + (batataFrita * 0.5));
    }
    
    return 0;
}