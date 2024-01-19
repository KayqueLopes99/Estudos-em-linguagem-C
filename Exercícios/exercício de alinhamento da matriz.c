#include <stdio.h>

int main (){
    int matriz[2][2] = {{31, 332}, {773, 4}};
    int linhas = 2;
    int colunas = 2;
    int i, j;
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
