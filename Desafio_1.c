// Crie um Script Pythom que leia o nome de uma pessoa e 
// mostre uma mensagem de boas vindas de acordo com o valor digitado.

#include <stdio.h>

int main(void){
char pessoa[100];

printf("Qual e seu nome querido(A)?\n");
scanf("%[^\n]", pessoa);

printf("Bem vindo querido %s ao mundo Otaku", pessoa);



    return 0;
}