// Faça um programa que leia o nome de um vendedor, o seu salário fixo e o total de vendas efetuadas por ele no mês (em dinheiro). Sabendo que este vendedor ganha 15% de comissão sobre suas vendas efetuadas, informar o total a receber no final do mês, com duas casas decimais.
// 1009

#include <stdio.h>

int main() {
    char nome_do_vendedor[50];  // Array para armazenar o nome do vendedor
    float salario, total_de_vendas, total;

    printf("Informe o Nome do Vendedor: ");
    scanf("%s", nome_do_vendedor);  

    printf("Informe o Salario do Vendedor: ");
    scanf("%f", &salario);  

    printf("Informe o Total de vendas efetuadas por ele no mês (em dinheiro): ");
    scanf("%f", &total_de_vendas);  

    total = salario + (total_de_vendas * 0.15);

    printf("TOTAL = %.2f\n", total);  

    return 0;
}
