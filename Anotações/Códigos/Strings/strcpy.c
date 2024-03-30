#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 20

int main() {
    // Configuração da localização para suportar caracteres acentuados
    setlocale(LC_ALL, "Portuguese");

    // Definição de strings origem e destino
    char origem[N] = {"Pokémon one!"};
    char destino[N];

    // Exibição das strings origem e destino antes da cópia
    printf("Antes do strcpy:\n");
    puts(origem);  // Exibe a string origem
    puts(destino); // Exibe a string destino (que ainda não foi inicializada)

    // Cópia da string origem para a string destino usando strcpy
    strcpy(destino, origem);

    // Exibição das strings origem e destino após a cópia
    printf("Depois do strcpy:\n");
    puts(origem);  // A string origem permanece inalterada
    puts(destino); // A string destino agora contém uma cópia da string origem

    return 0;
}
