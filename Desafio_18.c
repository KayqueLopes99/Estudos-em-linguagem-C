// Calcule o consumo médio de um automóvel sendo fornecidos a distância total percorrida (em Km) e o total de combustível gasto (em litros).
#include <stdio.h>

int main() {
int kilometros;
float Combustivel;
float total;

printf("Informe A Quantidade de Kilometros: ");
scanf("%d", &kilometros);
printf("Informe A Quantidade de Combustivel Gasto: ");
scanf("%f", &Combustivel);

total = kilometros/Combustivel;

printf("Total: %.2f", total);
    return 0;
}