//  Crie um script Python que leia o dia, o mês e o ano
// do nascimento de uma pessoa e mostre uma mensagem com a data formatada.

#include <stdio.h>

int main(void){
int dia, mes, ano;
printf("Informe o Dia do Seu nascimento:\n");
scanf("%d", &dia);
printf("Qual o mes do seu nascimento?\n");
scanf("%d", &mes);
printf("Qual o ano do seu nascimento?\n");
scanf("%d", &ano);

printf("Voce nasceu no dia %d do mes %d no ano de  %d Certo?", dia, mes, ano);

return 0;
}
