#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAM 50

// Definindo uma estrutura chamada tipo_pessoa
struct tipo_pessoa
{
    int idade;
    float peso;
    char nome[TAM];
};

// Criando um alias para struct tipo_pessoa
typedef struct tipo_pessoa tipo_pessoa;

int main()
{
    // Configurando a localização para suportar caracteres acentuados
    setlocale(LC_ALL, "Portuguese");

    // Inicializando uma variável do tipo tipo_pessoa
    tipo_pessoa pes = {0, 0.0, "Teste"};

    printf("Início\n");
    printf("pes.idade: %d\n", pes.idade);
    printf("pes.peso: %.2f\n", pes.peso);
    printf("pes.nome: %s\n", pes.nome);

    // Atribuindo valores aos campos da estrutura
    pes.idade = 10;
    pes.peso = 99.99;
    strcpy(pes.nome, "Texto");

    printf("\nAlterando os campos via código\n");
    printf("pes.idade: %d\n", pes.idade);
    printf("pes.peso: %.2f\n", pes.peso);
    printf("pes.nome: %s\n", pes.nome);

    // Solicitando inserções via teclado
    printf("\nInsira um número inteiro:\n");
    scanf("%d", &pes.idade);
    printf("\nInsira um número real:\n");
    scanf("%f", &pes.peso);
    fflush(stdin); // Limpando o buffer de entrada para evitar problemas
    printf("\nInsira uma palavra:\n");
    scanf("%s", pes.nome);

    printf("\nAlterando os campos via código\n");
    printf("pes.idade: %d\n", pes.idade);
    printf("pes.peso: %.2f\n", pes.peso);
    printf("pes.nome: %s\n", pes.nome);

    return 0;
}
