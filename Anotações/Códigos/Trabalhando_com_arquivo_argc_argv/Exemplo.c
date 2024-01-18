#include <stdio.h>

int main(int argc, char *argv[]) {

    // argc (argument count) é o número de argumentos passados para o programa
    // argv (argument vector) é um array de strings que contém os argumentos
    int i;

    // Verifica se foram passados argumentos para o programa
    if (argc > 1) {

        // Se houver mais de um argumento, exibe a mensagem com o número de argumentos
        printf("Foram inseridos %d argumentos:\n", argc);

        // Loop para percorrer todos os argumentos e exibi-los
        for (i = 0; i < argc; i++) {
            // Exibe cada argumento na posição i
            printf("%s\n", argv[i]);
        }
    }
    else {
        // Se nenhum argumento for passado, exibe a mensagem indicando a ausência de argumentos
        printf("Nao foram inseridos argumentos no programa.\n");
    }

    // Retorna 0 para indicar que o programa foi concluído com sucesso
    return 0;
}
