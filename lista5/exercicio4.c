#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*
* Autor: Samuel de Mello Cagnani
*/

/* 4) A série de Fibonacci é formada pela sequência: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ... Fazer um
algoritmo para gerar a série de FIBONACCI até o N-ésimo termo (ler o valor de N). */

int main() {

    int N = 0;
    int primeiro = 0;
    int segundo = 1;
    int proximo;

    do
    {
        printf("Digite quantos termos da fibonacci voce deseja: ");
        scanf("%d", &N);
    } while (N == 0);
    
    printf("FIBONACCI:");

    for(int i = 0; i < N; i++) 
    {
        printf(" %d", primeiro);
        proximo = primeiro + segundo;
        primeiro = segundo;
        segundo = proximo;
    }

    return 0;
}