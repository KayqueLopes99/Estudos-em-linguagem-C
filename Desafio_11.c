// Leia quatro valores inteiros A, B, C e D. A seguir, calcule e mostre a diferença do produto de A e B pelo produto de C e D segundo a fórmula: DIFERENCA = (A * B - C * D).
// 1007
#include <stdio.h>

int main(){
   int a,b,c,d,DIFERENCA;
   printf("Informe o Valor de A: ");
   scanf("%d", &a);
   printf("Informe o Valor de B: ");
   scanf("%d", &b);
   printf("Informe o Valor de C: ");
   scanf("%d", &c);
   printf("Informe o Valor de D: ");
   scanf("%d", &d);

DIFERENCA = (a * b - c * d);

printf("A diferença: %d", DIFERENCA);

    return 0;
}