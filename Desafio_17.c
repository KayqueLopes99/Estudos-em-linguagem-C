// Faça um programa que leia três valores e apresente o maior dos três valores lidos seguido da mensagem “eh o maior”. 
// 1013
#include <stdio.h>

int main() {
    float a, b, c;

    printf("Informe o Valor de A: ");
    scanf("%f", &a);
    printf("Informe o Valor de B: ");
    scanf("%f", &b);
    printf("Informe o Valor de C: ");
    scanf("%f", &c);

    if (a >= b && a >= c) {
        printf("O VALOR %.2f eh o Maior.\n", a);
    }
    else if (b >= a && b >= c) {
        printf("O VALOR %.2f eh o Maior.\n", b);
    }
    else {
        printf("O VALOR %.2f eh o Maior.\n", c);
    }

    return 0;
}
