//Faça um programa que receba dois números e mostre
//o maior deles. Caso eles sejam iguais, deve-se mostrar
//a mensagem "Os números são iguais".

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(int argc, char *argv[])
{
	setlocale(LC_ALL, "Portuguese");
float n1, n2;
printf("Insira o primeiro número:\n");
scanf("%f", &n1);
printf("Insira o segundo número:\n");
scanf("%f", &n2);

if(n1 > n2){
printf("O primeiro numero é maior! %.2f.\n", n1);	
}
if(n1 < n2){
printf("O segundo numero é maior! %.2f.\n", n2);	
}
else{
	printf("os números são iguais");
}
	system("pause");
	return 0;
}
