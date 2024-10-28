// A fórmula para calcular a área de uma circunferência é: area = π . raio2. Considerando para este problema que π = 3.14159.
// 1002
#include <stdio.h>
#include <math.h>
int main() {
float area, raio, pi;
pi = 3.12159;

printf("Informe O Valor do Raio: ");
scanf("%f", &raio);

area = (pow(raio,2) * pi);

printf("A Do Circulo: %.2f", area);
    return 0;
}