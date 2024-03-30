# Funções 
## Definição:
- Uma função é um bloco de código que realiza uma tarefa específica.
- Uma função ajuda a modularizar o programa e aumentar a reutilização do código.

## Sintaxe
```c
tipo_retorno nome_funcao(tipo_parametro1 nome_parametro1, tipo_parametro2 nome_parametro2, ...) {
    // corpo da função
}
```

- `tipo_retorno` é o tipo de dado que a função retorna.
- `nome_funcao` é o nome da função.
- `tipo_parametro` e `nome_parametro` são o tipo e o nome dos parâmetros da função.

## Exemplo

```c
int soma(int num1, int num2) {
    int resultado = num1 + num2;
    return resultado;
}
```

## Função com Vetor

Uma função pode receber um vetor como parâmetro.
```c
int soma_vetor(int vetor[], int tamanho) {
    int soma = 0;
    for(int i = 0; i < tamanho; i++) {
        soma += vetor[i];
    }
    return soma;
}
```

## Função com Matriz

Da mesma forma, uma função pode receber uma matriz como parâmetro. 
```c
int soma_matriz(int matriz[3][3]) {
    int soma = 0;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            soma += matriz[i][j];
        }
    }
    return soma;
}
```

## Chamada na main
``` c
#include <stdio.h>

// Função para somar dois números
int soma(int num1, int num2) {
    int resultado = num1 + num2;
    return resultado;
}

// Função para somar os elementos de um vetor
int soma_vetor(int vetor[], int tamanho) {
    int soma = 0;
    for(int i = 0; i < tamanho; i++) {
        soma += vetor[i];
    }
    return soma;
}

// Função para somar os elementos de uma matriz
int soma_matriz(int matriz[3][3]) {
    int soma = 0;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            soma += matriz[i][j];
        }
    }
    return soma;
}

int main() {
    int num1 = 5, num2 = 10;
    int vetor[5] = {1, 2, 3, 4, 5};
    int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    int resultado_soma = soma(num1, num2);
    printf("Soma: %d\n", resultado_soma);

    int resultado_soma_vetor = soma_vetor(vetor, 5);
    printf("Soma do vetor: %d\n", resultado_soma_vetor);

    int resultado_soma_matriz = soma_matriz(matriz);
    printf("Soma da matriz: %d\n", resultado_soma_matriz);

    return 0;
}
```
## Em Resumo:
- Resolver problemas complexos através de combinação de soluções menores.
- sintaxe <tipo> <nome_da_função>(<parâmetros>){
    <bloco_de_comandos>
    return <informações>
}
-  Função com vetor
  -       void nomeDaFuncao(tipo vetor[], int tamanho) {
         // corpo da função
}

-  Função com matriz
-      
         void nome_da_funcao(tipo nome_da_matriz[num_linhas][num_colunas]){
        // corpo da função
          }
  