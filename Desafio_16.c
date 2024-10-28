// Escreva um programa que leia três valores com ponto flutuante de dupla precisão: A, B e C. Em seguida, calcule e mostre:
// a) a área do triângulo retângulo que tem A por base e C por altura.
// b) a área do círculo de raio C. (pi = 3.14159)
// c) a área do trapézio que tem A e B por bases e C por altura.
// d) a área do quadrado que tem lado B.
// e) a área do retângulo que tem lados A e B.
// 1012
#include <stdio.h>
#include <math.h>

int main() {
    float a,b,c;
    float Area_retangulo, Area_circulo, Area_trapezio, 
    Area_quadrado, Area_triangulo;
    float pi = 3.14159;
   printf("Informe o Valor de A: ");
   scanf("%f", &a);
   printf("Informe o Valor de B: ");
   scanf("%f", &b);
   printf("Informe o Valor de C: ");
   scanf("%f", &c);
   Area_triangulo = (a*c)/2;
   Area_circulo = (pi * pow(c,2));
   Area_trapezio = ((a + b)*c)/2;
   Area_quadrado = pow(b,2);
   Area_retangulo = a * b;

printf("Area Triangulo: %.3f\n", Area_triangulo);
printf("Area Circulo: %.3f\n", Area_circulo);
printf("Area Trapezio: %.3f\n", Area_trapezio);
printf("Area Quadrado: %.3f\n", Area_quadrado);
printf("Area Retangulo: %.3f\n", Area_retangulo);


    return 0;
}