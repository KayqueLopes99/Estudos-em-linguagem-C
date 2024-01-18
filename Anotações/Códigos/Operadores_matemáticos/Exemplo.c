#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int Pikachu, eletricidade, soma, subt, multi, divisao, resto_divisao;

    printf("Informe a força do seu Pikachu:\n");
    scanf("%d", &Pikachu);
    printf("Informe a inserção da eletricidade:\n");
    scanf("%d", &eletricidade);

    soma = Pikachu + eletricidade;
    subt = Pikachu - eletricidade;
    multi = Pikachu * eletricidade;
    divisao = Pikachu / eletricidade;
    resto_divisao = Pikachu % eletricidade;

    printf("RESULTADOS:\n");
    printf("Adição - Poder do ataque básico: %d.\n", soma);
    printf("Subtração - Poder do ataque distorcido: %d.\n", subt);
    printf("Multiplicação - Poder do ataque crítico: %d.\n", multi);
    printf("Divisão - Poder do ataque em turnos: Resultado = %d, Resto = %d.\n", divisao, resto_divisao);

    return 0;
}
