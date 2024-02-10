## Void
- O comando void na linguagem de programação C tem vários usos, dependendo do contexto:

-Como tipo de retorno de função:
void minhaFuncao() {
    printf("Esta função não retorna um valor.\n");
}

-Como tipo de parâmetro de função:
void minhaFuncao(void) {
    printf("Esta função não recebe nenhum parâmetro.\n");
}

-Como tipo de ponteiro: 
int *meu_numero = (int *) malloc(sizeof(int));

## long 
-Definição: É um tipo de dado inteiro que ocupa mais espaço de memória do que o tipo int.
- Exemplo: 
long populacaoMundial = 785555550L;
long int x = 1234567890123456789;
printf("%ld\n", x);  // Imprime: 1234567890123456789

## long long int
- long long int é um tipo de dado inteiro que tem pelo menos 8 bytes em todos os sistemas.
. Ele pode armazenar números ainda maiores do que long int.

Exemplo:

long long int x = 1234567890123456789;
printf("%lld\n", x);  // Imprime: 1234567890123456789

## unsigned: 
. unsigned é um modificador de tipo que pode ser usado com tipos de dados inteiros para indicar que eles não devem armazenar números negativos.

Exemplo:

unsigned int x = 4294967295;
printf("%u\n", x);  // Imprime: 4294967295

## Double
- Definição: É um tipo de dado numérico que representa números com maior precisão do que o float. 
- Ele pode armazenar valores com parte inteira e parte decimal.
- Exemplo:
double altura = 1.75;
## system(pause)
- Este comando é específico para o ambiente Windows e é usado para pausar a execução do programa até que o usuário pressione qualquer tecla.
## system("cls")
- Este comando é usado para limpar a tela do console. 


