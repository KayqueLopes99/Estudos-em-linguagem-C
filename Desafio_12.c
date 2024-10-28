// Escreva um programa que leia o número de um funcionário, seu número de horas trabalhadas, o valor que recebe por hora e calcula o salário desse funcionário. A seguir, mostre o número e o salário do funcionário, com duas casas decimais.

// 1008
#include <stdio.h>

int main(){
   int numero_do_funcionario, horas;
   float salario, valor_recebido_por_hora;
   printf("Informe o Numero do Funcionario: ");
   scanf("%d", &numero_do_funcionario);
   printf("Informe o Valor que Recebe Por Hora: ");
   scanf("%f", &valor_recebido_por_hora);
   printf("Informe o Numero de Horas Trabalhadas: ");
   scanf("%d", &horas);

salario = (horas * valor_recebido_por_hora);
printf("NUMBER = %d\n", numero_do_funcionario);
printf("SALARY = %.2f", salario);
   
   
   
   return 0;
}