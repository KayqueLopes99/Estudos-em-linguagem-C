## Varíaveis e atribuição de dados
. Para armazenar dados é preciso usar varíaveis e declarar elas.
. Sintaxe:
- <Tipo><nome>;
. Não pode espaço, caracteres especiais e númros na primeira posição.
. Pode Letras, '_' e némeros.

## Tipos de declaração
## Sintaxe: tipo variavel;
# Char: 
- Este tipo é usado para armazenar um único caractere.
- Exemplo:
    char letra = 'A'; // char letra;
# Int:
- Este tipo é usado para armazenar um número inteiro. 
- Exemplo:
    int numero = 10; // int numero;
# Float: 
- Este tipo é usado para armazenar um número real. 
- Exemplo:
    float salario = 1234.56; // float salario;
# Double: 
- Este tipo é usado para armazenar um número real com precisão maior que float. 
- Dobro da capacidade.
- Exemplo:
    double pi = 3.141592653589793; // double pi;

# void:
- Este é um tipo especial que indica:
- Não existencia de um tipo associado ao objeto correspondente.
- Tipo é desconhecido.
- Querido não declara variáveis do tipo void.
- Significa "sem tipo" ou "nada" e pode ser usado para.

. Argumento de função: 
- Exemplo explicativo
- A função int minhaFuncao(void) indica que  minhaFuncao não aceita nenhum argumento.

. Valor de retorno da função:
- Indicar que uma função não retorna nenhum valor. 
- Útil quando a função realiza a execução, mas não precisa retornar a nada.
- #include <stdio.h>

// Uma função que não retorna valor
void imprimirMensagem(void) {
    printf("Olá, mundo!\n");
}
// main e a função não aceitam argumeneto
int main(void) {
    // Chamar a função
    imprimirMensagem();
    return 0;
}

.  int main(void) é uma função que não aceita argumentos e retorna um valor inteiro. 

Exemplo:
- // Função sem parâmetros e sem valor de retorno
void minhaFuncao1(void) {
    printf("função sem parâmetros e sem valor de retorno.\n");
}

// Função sem parâmetros e com valor de retorno
int minhaFuncao2(void) {
    printf("função sem parâmetros e com valor de retorno.\n");
    return 0;
}

// Função com parâmetros e sem valor de retorno
void minhaFuncao3(int x) {
    printf("função com parâmetros e sem valor de retorno. x é %d.\n", x);
}

// Função com parâmetros e com valor de retorno
int minhaFuncao4(int x) {
    printf("função com parâmetros e com valor de retorno. x é %d.\n", x);
    return x;


# Obsevações:
. short int e long int servem para armazenar números inteiros com diferentes quantidades de memória.

. short int
- Este é um tipo de dado que usa menos memória do que um int. 
    ```c
    short int a; // 2 bytes de memória.
    ```

. long int: Este é um tipo de dado que usa mais memória do que um int.
    ```c
    long int b; // 4 bytes de memória
    ```

# O define 
. #define. 
- Definimos um valor para uma varíavel nome_macho.
. A sintaxe:
```c
#define nome_macro sequência_de_caracteres
```
```c
#define MAX 1000 // no maxímo 1000
```
