// Leia dois valores inteiros. A seguir, calcule o produto entre estes dois valores e atribua esta operação à variável PROD. A seguir mostre a variável PROD com mensagem correspondente.   
// 1004
#include <stdio.h>

int main(){
    int C,D,PRODUTO;
    printf("Informe o Valor de C: ");
    scanf("%d", &C);
    printf("Informe o Valor de D: ");
    scanf("%d", &D);

PRODUTO = (C * D);

printf("o Produto: %d", PRODUTO);

    return 0;
}