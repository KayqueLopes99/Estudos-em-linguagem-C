# Vetores e Arrays

## Definição
Um array em C é uma coleção de elementos do mesmo tipo armazenados em posições de memória contíguas. Eles são identificados por um único nome comum e podem ser acessados usando seus índices.

## Sintaxe

```c
tipo nome_array[tamanho];
```

- `tipo` é o tipo de dados dos elementos do array.
- `nome_array` é o nome do array.
- `tamanho` é o número de elementos no array.

## Exemplo

```c
int numeros[5] = {1, 2, 3, 4, 5};
printf("%d", numeros[0]); // Saída: 1
```

## Manipulação
- Alterar o primeiro elemento do array `numeros` para `10`, você faria:

```c
numeros[0] = 10;
```

## Entrada e Saída

Para ler e escrever arrays, geralmente usamos loops.

```c
int numeros[5];
for(int i = 0; i < 5; i++) {
    scanf("%d", &numeros[i]);
}

for(int i = 0; i < 5; i++) {
    printf("%d ", numeros[i]);
}
```


# Em resumo:

- Explicação: Um vetor é uma estrutura de dados que armazena elementos.
- Sintaxe: tipo nome_vetor[tamanho];
- Exemplo: int vetor[5];

Acesso aos elementos:
- Sintaxe: valor = nome_vetor[<indice> OU <posição>];
- Exemplo: int elemento = vetor[9];

Inicialização:
- Sintaxe:
-     tipo nome_vetor[tamanho] = {valor1, valor2, ...};
- Exemplo: int vetor[9] = {7, 8, 9}; 
- loops para percorrer os elementos do vetor e realizar operações caso precise.
- Exemplo:
-      for (int i = 0; i < tamanho; i++) {
      printf("%d ", vetor[i]);
      }

