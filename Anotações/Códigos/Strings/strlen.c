#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 50

int main() {
    // Configuração da localização para suportar caracteres acentuados
    setlocale(LC_ALL, "Portuguese");

    // Declaração de uma string e uma variável inteira
    char s[N];
    int i;

    // Solicita ao usuário que digite um texto
    printf("Digite um texto:\n");

    // Obtém a entrada do usuário usando gets (cuidado: gets é considerada insegura)
    gets(s);

    // Calcula o tamanho da string usando a função strlen
    i = strlen(s);

    // Exibe o tamanho do texto inserido
    printf("\nTamanho do texto: %d\n\n", i);

    // Impressão de posição a posição
    printf("Impressão de posição a posição:\n");

    // Loop para percorrer a string e imprimir caractere por caractere
    for (i = 0; i < strlen(s); i++) {
        printf("%c", s[i]);
    }

    // Nova linha para melhor formatação
    printf("\n");

    return 0;
}
