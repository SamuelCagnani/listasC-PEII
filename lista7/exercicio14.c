#include <stdio.h>
#include <stdlib.h>

int main() {

    int i = 10; 
    int *pi = &i;
    int **ppi = &pi;
    float f = 12.5;
    float *pf = &f;
    float **ppf = &pf;


    printf("\n\nObtendo diretamente:\n");
    printf("---------------\n");
    printf("Conteudo de i: %d\n", *pi);
    printf("Endereco de i: %d\n", &i);
    printf("Endereco de pi: %d\n", &pi);


    printf("\n\nUsando somente **ppi\n");
    printf("---------------\n");
    printf("Conteudo de i: %d\n", **ppi);
    printf("Endereco de i: %d\n", *ppi);
    printf("Endereco de pi: %d\n", ppi);
    printf("Endereco de ppi: %d\n", &ppi);

    printf("\n\nObtendo diretamente:\n");
    printf("---------------\n");
    printf("Conteudo de f: %.2f\n", *pf);
    printf("Endereco de f: %d\n", &f);
    printf("Endereco de pf: %d\n", &pf);


    printf("\n\nUsando somente **ppi\n");
    printf("---------------\n");
    printf("Conteudo de f: %.2f\n", **ppf);
    printf("Endereco de f: %d\n", *ppf);
    printf("Endereco de pf: %d\n", ppf);
    printf("Endereco de ppf: %d\n", &ppf);


    **ppi = 100;
    printf("%d\n", i);
    
    return 0;
}