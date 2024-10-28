// Faça um programa que calcule e mostre o volume de uma esfera sendo fornecido o valor de seu raio (R). A fórmula para calcular o volume é: (4/3) * pi * R3. Considere (atribua) para pi o valor 3.14159.
// 1011
#include <stdio.h>
#include <math.h>
int main() {
    float raio,volume,pi;
    pi = 3.14159;
    printf("Informe o Valor de Raio: ");
    scanf("%f", &raio);

    volume = ((1.333) * pi * (pow(raio,3)));

    printf("A Area da ESFERA: %.3f", volume);

    return 0;
}