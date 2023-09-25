#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*
* Autor: Samuel de Mello Cagnani
*/

/* 1) Em um prédio, com 50 moradores, há três elevadores denominados A, B e C. Para otimizar
o sistema de controle dos elevadores, foi realizado um levantamento no qual cada usuário respondia:

    O elevador que utilizava com mais frequência;
    O período que utilizava o elevador, entre:
    
    • “M” = matutino;
    • “V” = vespertino;
    • “N” = noturno.
    
    Fazer um algoritmo para calcular e imprimir:
    (a) Qual é o elevador mais frequentado e em que período se concentra o maior fluxo;
    (b) Qual o período mais usado de todos e a que elevador pertence;
    (c) Qual a diferença percentual entre o mais usado dos horários e o menos usado;
    (d) Qual a percentagem sobre o total de serviços prestados do elevador de média utilização. 
*/

#define LENGTH_LEVANTAMENTO 10

int main() {

    int contA, contB, contC;
    int contM, contV, contN;
    int contAM, contBM, contCM, contAV, contBV, contCV, contAN, contBN, contCN;
    int MaxPeriodoM, MaxPeriodoV, MaxPeriodoN;
    bool M = false;
    bool V = false;
    bool N = false;
    char elevadorUtilizado[LENGTH_LEVANTAMENTO] = {'A', 'B', 'C', 'A', 'B', 'A', 'C', 'A', 'B', 'C'};
    char periodoUtilizado[LENGTH_LEVANTAMENTO] = {'N', 'M', 'M', 'V', 'N', 'N', 'V', 'N', 'V', 'M'};

    for(int i = 0; i < LENGTH_LEVANTAMENTO; i++) {
        if((elevadorUtilizado[i] == 'A') || (elevadorUtilizado[i] == 'a')) {
            contA++;
        } else if((elevadorUtilizado[i] == 'B') || (elevadorUtilizado[i] == 'b')) {
            contB++;
        } else if((elevadorUtilizado[i] == 'C') || (elevadorUtilizado[i] == 'c')) {
            contC++;
        }
    }

    for(int i = 0; i < LENGTH_LEVANTAMENTO; i++) {
        if((periodoUtilizado[i] == 'M') || (periodoUtilizado[i] == 'm')) {
            contM++;
        } else if((periodoUtilizado[i] == 'V') || (periodoUtilizado[i] == 'v')) {
            contV++;
        } else if((periodoUtilizado[i] == 'N') || (periodoUtilizado[i] == 'n')) {
            contN++;
        }
    }

    if(contA > contB && contA > contC) {
        printf("O elevador mais frequentado eh o elevador A.\n");
    } else if(contB > contA && contB > contC) {
        printf("O elevador mais frequentado eh o elevador B\n");
    } else if(contC > contA && contC > contB) {
        printf("O elevador mais frequentado eh o elevador C\n");
    } else if(contA == contB && contA > contC) {
        printf("Os elevadores A e B sao os mais frequentados e tem o mesmo nivel de frequencia.\n");
    } else if(contB == contC && contB > contA) {
        printf("Os elevadores B e C sao os mais frequentados e tem o mesmo nivel de frequencia.\n");
    } else if(contC == contA && contC > contB) {
        printf("Os elevadores A e C sao os mais frequentados e tem o mesmo nivel de frequencia.\n");
    } else if(contA == contB && contA == contC) {
        printf("Todos os elevadores tem o mesmo nivel de frequencia.\n");
    }

    if(contM > contV && contM > contN) {
        printf("O maior fluxo eh no periodo matutino.\n");
        M = true;
    } else if(contV > contM && contV > contN) {
        printf("O maior fluxo eh no periodo vespertino.\n");
        V = true;
    } else if(contN > contM && contN > contV) {
        printf("O maior fluxo eh no periodo noturno.\n");
        N = true;
    } else if(contM == contV && contM > contN) {
        printf("Os periodos com o maior fluxo sao o matutino e o vespertino.\n");
        M = true;
        V = true;
    } else if(contV == contN && contV > contM) {
        printf("Os periodos com o maior fluxo sao o vespertino e o noturno.\n");
        V = true;
        N = true;
    } else if(contN == contM && contN > contV) {
        printf("Os periodos com o maior fluxo sao o matutino e o noturno.\n");
        M = true;
        N = true;
    } else if(contM == contV && contM == contN) {
        printf("O fluxo eh o mesmo em todos os turnos.\n");
        M = true;
        V = true;
        N = true;
    }

    if(M == true && V == true && N == true) {
        for(int i = 0; i < LENGTH_LEVANTAMENTO; i++) {
            if(((periodoUtilizado[i] == 'M') || (periodoUtilizado[i] == 'm')) && ((elevadorUtilizado[i] == 'A') || (elevadorUtilizado[i] == 'a'))) {
                contAM++;
            } else if(((periodoUtilizado[i] == 'M') || (periodoUtilizado[i] == 'm')) && ((elevadorUtilizado[i] == 'B') || (elevadorUtilizado[i] == 'b'))) {
                contM++;
            } else if(((periodoUtilizado[i] == 'M') || (periodoUtilizado[i] == 'm')) && ((elevadorUtilizado[i] == 'C') || (elevadorUtilizado[i] == 'c'))) {
                contCM++;
            } else if(((periodoUtilizado[i] == 'V') || (periodoUtilizado[i] == 'v')) && ((elevadorUtilizado[i] == 'A') || (elevadorUtilizado[i] == 'a'))) {
                contAV++;
            } else if(((periodoUtilizado[i] == 'V') || (periodoUtilizado[i] == 'v')) && ((elevadorUtilizado[i] == 'B') || (elevadorUtilizado[i] == 'b'))) {
                contBV++;
            } else if(((periodoUtilizado[i] == 'V') || (periodoUtilizado[i] == 'v')) && ((elevadorUtilizado[i] == 'C') || (elevadorUtilizado[i] == 'c'))) {
                contCV++;
            } else if(((periodoUtilizado[i] == 'N') || (periodoUtilizado[i] == 'n')) && ((elevadorUtilizado[i] == 'A') || (elevadorUtilizado[i] == 'a'))) {
                contAN++;
            }
            else if (((periodoUtilizado[i] == 'N') || (periodoUtilizado[i] == 'n')) && ((elevadorUtilizado[i] == 'B') || (elevadorUtilizado[i] == 'b')))
            {
                contBN++;
            }
            else if (((periodoUtilizado[i] == 'N') || (periodoUtilizado[i] == 'n')) && ((elevadorUtilizado[i] == 'C') || (elevadorUtilizado[i] == 'c')))
            {
                contCN++;
            }
        }
    } else {

    }
    return 0;
}