#include <stdio.h>
#include <locale.h>

// Função imprime1: imprime um array de inteiros com base no tamanho fornecido
void imprime1(int v[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", v[i]);// no tamanho do vetor
    }
}

// Funçãoo imprime2: imprime um array de inteiros com tamanho fixo (5 elementos)
void imprime2(int v[5]) {
    int i;
    for (i = 0; i < 5; i++) {
        printf("%d ", v[i]);
    }
}

// Função imprime3: imprime um array de inteiros usando ponteiro e tamanho fornecido
void imprime3(int *v, int n) {//*v = [v]
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
}

// Função principal
int main() {
    int vet[5] = {1, 2, 3, 4, 5};

    // Configurando a localização para suportar caracteres acentuados
    setlocale(LC_ALL, "Portuguese");

    // Chamando as funçães de impressão com o mesmo array 'vet'

    // Chamando imprime1 com o tamanho do array explicitamente passado
    puts("Primeiro imprime:");
    imprime1(vet, 5);
// vet e tamnho do vet.
    // Chamando imprime2 com um array de tamanho fixo
    puts("\nSegundo imprime:");
    imprime2(vet);

    // Chamando imprime3 com um ponteiro e o tamanho do array explicitamente passado
    puts("\nTerceiro imprime:");
    imprime3(vet, 5);

    return 0;
}
