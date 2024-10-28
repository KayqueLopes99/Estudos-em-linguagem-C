// Neste problema, deve-se ler o código de uma peça 1, o número de peças 1, o valor unitário de cada peça 1, o código de uma peça 2, o número de peças 2 e o valor unitário de cada peça 2. Após, calcule e mostre o valor a ser pago.
// 1010
#include <stdio.h>

int main() {
    int codigo_da_peca1, numero_pecas1, codigo_da_peca2, numero_pecas2;
    float Valor_unitario_da_peca2 ,Valor_unitario_da_peca1;
    float Total_a_pagar;

    printf("Informe o Código da Peça 1: ");
    scanf("%d", &codigo_da_peca1);
    printf("Informe a Qunatdade de Peça 1: ");
    scanf("%d", &numero_pecas1);
    printf("Informe o Valor Unitario Peça 1: ");
    scanf("%f", &Valor_unitario_da_peca1);



    printf("Informe o Código da Peça 2: ");
    scanf("%d", &codigo_da_peca2);
    printf("Informe a Qunatdade de Peça 2: ");
    scanf("%d", &numero_pecas2);
    printf("Informe o Valor Unitario Peça 1: ");
    scanf("%f", &Valor_unitario_da_peca2);

    Total_a_pagar = ((numero_pecas1*Valor_unitario_da_peca1)+(numero_pecas2*Valor_unitario_da_peca2));

    printf("Total a Pagar R$ %.2f", Total_a_pagar);
    return 0;
}