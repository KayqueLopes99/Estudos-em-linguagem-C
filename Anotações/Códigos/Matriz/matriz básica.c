#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    
    int mat[3][3];  // Declaração de uma matriz 3x3

    // Inicialização dos elementos da matriz
    mat[0][0] = 1;
    mat[0][1] = 2;
    mat[0][2] = 3;

    mat[1][0] = 4;
    mat[1][1] = 5;
    mat[1][2] = 6;

    mat[2][0] = 7;
    mat[2][1] = 8;
    mat[2][2] = 9;

    printf("Imprimindo a primeira linha:\n");

    // Imprimindo os elementos da primeira linha da matriz
    printf("%d %d %d\n", mat[0][0], mat[0][1], mat[0][2]);

    return 0;
}

