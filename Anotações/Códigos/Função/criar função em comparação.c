#include <stdio.h>
#include <locale.h>

// Função para calcular o maior entre dois números
float maior(float num1, float num2) {
    if (num1 > num2)
        return num1;
    else
        return num2;
}

// Função principal
int main() {
    float x, y, m;

    // Configurando a localização para suportar caracteres acentuados
    setlocale(LC_ALL, "Portuguese");

    // Solicitando ao usuário que insira dois valores
    printf("Insira um valor:\n");
    scanf("%f", &x);
    printf("Insira outro valor:\n");
    scanf("%f", &y);

    // Chamando a função maior() para obter o maior valor
    m = maior(x, y);

    // Exibindo o maior valor com duas casas decimais
    printf("Maior: %.2f\n", m);

    return 0;
}
