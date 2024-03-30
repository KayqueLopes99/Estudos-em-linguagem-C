#include <stdio.h>

// Função para calcular o tamanho da string
int tamanho(char s[]) {
    int i;
    for (i = 0; s[i] != '\0'; i++) {
        // Neste loop, percorremos cada caractere da string
        // até encontrar o caractere nulo '\0', que marca o fim da string.
    }
    return i;
}

int main() {
    char s[15];
    printf("Informe um texto: ");
    scanf("%s", s);
    int t = tamanho(s);
    printf("O texto possui %d caracteres.\n", t);
    return 0;
}
