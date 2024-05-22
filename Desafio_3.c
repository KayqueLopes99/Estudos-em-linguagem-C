// Crie um script Python que leia dois numeros a tente 
// mostrar a soma entre eles.
#include <stdio.h>

int main(void){
int numero1, numero2;
int soma = 0;

printf("Digite o primeiro algarismo:\n");
scanf("%d", &numero1);
printf("Digite o segundo algarismo:\n");
scanf("%d", &numero2);

soma = numero1 + numero2;


printf("A soma: %d", soma);


    return 0;
}