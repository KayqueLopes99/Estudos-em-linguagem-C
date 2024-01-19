## TYPEDEF:
- typedef significa que estamos renomeando um tipo de dados para organização e o entendimento. Estamos nomeando
um tipo ou algo. 
- A sintaxe:
- typedef <nome do tipo de dado existente> <novo nome>;
- Com estruturas:
typedef struct ponto {
    int x;
    int y;
} Ponto;
typedef struct ponto Ponto;
typedef struct ponto *PPonto;
- Usando o mesmo typedef 
typedef struct ponto Ponto, *PPonto;  

- Com tipagens:
typedef int Inteiro;
typedef char Caractere;
typedef float Real;

## Unsigned 
- Unsigned é um modificador que é usado para alterar o comportamento dos tipos de dados inteiros. 
- Representa apenas valores não negativos.

- A sintaxe:
unsigned <nome do tipo de dado existente>

- Por exemplo, você pode ter unsigned int ou unsigned char.

- A função do unsigned  no código é permitir que um tipo de dados inteiro represente um intervalo maior de valores não negativos. 



- Exemplo:
#include <stdio.h>

int main() {
    unsigned int num = 4000000000;  // Um número maior que o máximo de um int normal
    printf("O valor de num é: %u\n", num);
    return 0;
}

## Usigned long long
. unsigned long long: para armazenar valores inteiros positivos grandes.
. Sintaxe: unsigned long long int var;

## long
. É um modificador para aumentar a faixa e o tamanho dos valores que suas variáveis podem armazenar. 
- Sintaxe: long int var;
    