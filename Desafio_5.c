// # Faça um programa que leia um número
// interior e mostre na tela o seu sucessor
// e antecessor

#include <stdio.h>

int main(void){
int numero;
int antesessor = 0;
int sucessor = 0;

printf("Informe um numero: ");
scanf("%d", &numero);

antesessor = numero - 1;
sucessor = numero + 1;

printf("Seu santecessor: %d\n", antesessor);
printf("Seu sucessor: %d\n", sucessor);


    return 0;
}