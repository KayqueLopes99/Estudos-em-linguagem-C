#include <stdio.h>
//Leia 2 valores inteiros e armazene-os nas variáveis A e B. 
// Efetue a soma de A e B atribuindo o seu resultado na variável X. Imprima X conforme exemplo apresentado abaixo. 
// 1001
int main() {
 
    int a,b,x;
    printf("Informe o Valor para A: ");
    scanf("%d", &a);
    printf("Informe o Valor para B: ");
    scanf("%d", &b);

    x = a + b;
    printf("A Soma de A e B: %d", x);
 
    return 0;
}