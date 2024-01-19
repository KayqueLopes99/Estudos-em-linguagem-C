#include <stdio.h>
#include <math.h>

void calcula_baskara(float *resultado, float *a, float *b, float *c) {
    float r = pow(*b, 2) - 4 * (*a) * (*c);

    if (r < 0) {
        printf("A equacao nao possui raizes reais.\n");
    } else {
        *resultado = (-(*b) + sqrt(r)) / (2 * (*a));
        printf("A primeira raiz %f.\n", *resultado);

        *resultado = (-(*b) - sqrt(r)) / (2 * (*a));
        printf("A segunda raiz %f.\n", *resultado);
    }
}

int main() {
    float a, b, c, resultado;

    printf("Digite os coeficientes a, b e c: ");
    scanf("%f %f %f", &a, &b, &c);

    calcula_baskara(&resultado, &a, &b, &c);

    return 0;
}
