#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/*
* Autor: Samuel de Mello Cagnani
*/

/* 3) Faça um algoritmo e o programa em C para ler o ano de nascimento de uma pessoa, calcular a
sua idade e verificar e informar se ela tem idade de votar (16 anos ou mais) e para obter carteira
de habilitação (18 anos ou mais). Imprimir com mensagens correspondentes. */

int main() {

    int dia, mes, ano, idade;
    int aux = 0;
    char voto[10] = ("\0");
    char cnh[10] = ("\0");
           
    struct tm *data_hora_atual;
    time_t segundos;
    time(&segundos);   
    data_hora_atual = localtime(&segundos); 
           
    printf("Digite a data de nascimento (dd/mm/aaaa):");
    scanf("%d/%d/%d", &dia, &mes, &ano);
           
    aux = ano;
           
    while(aux < data_hora_atual->tm_year+1900) {
        idade++;
        aux++;
    }
          
    if(mes > data_hora_atual->tm_mon+1) {
        idade--;
    } else if((mes == data_hora_atual->tm_mon+1) && (dia > data_hora_atual->tm_mday)) {
        idade--;
    }
           
    if(idade >= 16) {
        strcpy(voto, "Sim");
        if(idade >= 18) {
            strcpy(cnh, "Sim");
        } else {
            strcpy(cnh, "Nao");
        }
    } else {
        strcpy(voto, "Nao");
        strcpy(cnh, "Nao");
    }
           
    printf("\nData nascimento: %d/%d/%d", dia, mes, ano);
    printf("\nData atual: %d/%d/%d", data_hora_atual->tm_mday+1, data_hora_atual->tm_mon+1, data_hora_atual->tm_year+1900);
    printf("\nIdade: %d", idade);
    printf("\nVoto: %s", voto);
    printf("\nCNH: %s", cnh);

    return 0;
}