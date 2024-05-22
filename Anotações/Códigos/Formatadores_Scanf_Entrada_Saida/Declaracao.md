# Varíaveis e atribuição de dados
- Para armazenar dados é preciso usar varíaveis e declarar elas.
- Sintaxe:
- <Tipo><nome>;
- Não pode espaço, caracteres especiais e númros na primeira posição.
- Pode Letras, '_' e números.

## Tipos de declaração
## Sintaxe: tipo variavel;
# Char: 
- Este tipo é usado para armazenar um único caractere.
- Exemplo:
``` c
    char letra = 'A'; // char letra;
``` 
# Int:
- Este tipo é usado para armazenar um número inteiro. 
- Exemplo:
``` c
    int numero = 10; // int numero;
```
# Float: 
- Este tipo é usado para armazenar um número real. 
- Formatar, Usar %.2f. 
- Exemplo:
``` c
    float salario = 1234.56; // float salario;
```
# Double: 
- Este tipo é usado para armazenar um número real com precisão maior que float. 
- Dobro da capacidade.
- Exemplo:
``` c
    double pi = 3.141592653589793; // double pi;
```
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
``` c 
#include <stdio.h>

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
```

- Exemplo:
``` c
// Função sem parâmetros e sem valor de retorno
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
```

# O #define 
- Definimos um valor para uma varíavel nome_macro.
. A sintaxe:
```c
#define nome_macro sequência_de_caracteres
```
```c
#define MAX 1000 // no maxímo 1000
```
# %[^\n]: 
- Na função scanf lê uma sequência de caracteres até encontrar um caractere de nova linha (\n).
- Exemplo:
```c
#include <stdio.h>

int main(void){
char pessoa[100];

printf("Qual e seu nome querido(A)?\n");
scanf("%[^\n]", pessoa);

printf("Bem vindo querido %s ao mundo Otaku", pessoa);

    return 0;
}
```