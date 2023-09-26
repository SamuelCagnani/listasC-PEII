#include <stdio.h>
#include <stdlib.h>

int main() {

    int x = 10;
    int *px = &x;
    int **ppx = &px; // No exercício **ppx é igualado a &x, uso incorreto, **ppx deve receber um endereço para um ponteiro para um tipo inteiro;
    float y = 5.9;
    float *py = &y;
    float **ppy = &py;

    printf("%d\n", (**ppx)++);

    return 0;
} 