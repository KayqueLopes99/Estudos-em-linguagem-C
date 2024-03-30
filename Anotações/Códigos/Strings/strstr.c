#include <stdio.h>
#include <string.h>

int main() {
    // Lista de Pokémon
    char listaPokemon[] = "Bulbasaur Charmander Pikachu Squirtle";

    // Pokémon que queremos verificar
    char pokemonBuscado[] = "Pikachu";

    // Verifica se o Pokémon está na lista
    char *resultado = strstr(listaPokemon, pokemonBuscado);

    if (resultado != NULL) {
        printf("Encontrou o Pokémon: %s\n", resultado);
    } else {
        printf("Não encontrou o Pokémon.\n");
    }

    return 0;
}
