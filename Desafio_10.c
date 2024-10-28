// Leia 3 valores, no caso, variáveis A, B e C, que são as três notas de um aluno. A seguir, calcule a média do aluno, sabendo que a nota A tem peso 2, a nota B tem peso 3 e a nota C tem peso 5. Considere que cada nota pode ir de 0 até 10.0, sempre com uma casa decimal.
// 1006
#include <stdio.h>

int main(){
    float A,B,C,media,peso_A,peso_B,peso_C;
    printf("Informe a Primeira Nota: ");
    scanf("%f", &A);
    printf("Informe a Segunda Nota: ");
    scanf("%f", &B);
    printf("Informe a Terceira Nota: ");
    scanf("%f", &C);
peso_A = 2;
peso_B = 3;
peso_C = 5;
media = (A * peso_A + B * peso_B + C *peso_C) / (peso_A + peso_B + peso_C);

printf("A Media: %.2f", media);
    return 0;
}