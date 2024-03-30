#include <stdio.h>

int main()
{
    int mat[3][3] ={{1 , 2 , 3},
                    {4 , 5 , 6},
                    {7 , 8 , 9}
    };
    int i, j;
    //i - linha
    //j - coluna

    // Imprimindo a primeira linha da matriz
    printf("Imprimindo a primeira linha:\n");
    for(j = 0; j < 3; j++)
    {
        printf("%d ", mat[0][j]);
    }

    // Imprimindo espaços para melhor formatação
    printf("\n\n");

    // Imprimindo a matriz completa
    printf("Imprimindo a matriz toda:\n");
    for(i = 0; i < 3; i++)
    {
        
            printf("%d ", mat[i][j]);
        
        // Nova linha para cada linha da matriz
        printf("\n");
    }

    return 0;
}

