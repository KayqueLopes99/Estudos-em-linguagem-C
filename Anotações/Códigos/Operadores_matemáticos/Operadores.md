# Operadores matemáticos
- Adição (+): soma números.
   ```` c
   int soma = 5 + 3; // soma é 8
   ````
- Subtração (-): Subtrai números do primeiro.
   ```` c
   int subtracao = 5 - 3; // subtracao é 2
   ````
- Multiplicação (*): Multiplica números.
   ```` c
   int multiplicacao = 5 * 3; // multiplicacao é 15
   ````
- Divisão (/): Divide o primeiro número pelo segundo.
   ```` c
   int divisao = 5 / 2; // divisao é 2
   float divisaoReal = 5.0 / 2.0; // divisaoReal é 2.5
   ````

- Módulo (%): Retorna o resto da divisão do primeiro número pelo segundo.
     ```` c
     int modulo = 5 % 2; // modulo é 1
     ````
#  Operadores compostos de atribuição
- Usados para atribuir o resultado de uma expressão a uma variável.

- (=): Atribui o valor do lado direito à variável do lado esquerdo.
    ```` c 
    int a = 5; // a é agora 5
    ````
- (+=): Adiciona o valor do lado direito à variável do lado esquerdo e atribui o resultado à variável do lado esquerdo.
   ```` c 
   int a = 5;
    a += 3; // a é agora 8
    ````

- (-=): Subtrai o valor do lado direito da variável do lado esquerdo e atribui o resultado à variável do lado esquerdo.
   ```` c 
   int a = 5;
    a -= 3; // a é agora 2
    ````

- (*=): Multiplica a variável do lado esquerdo pelo valor do lado direito e atribui o resultado à variável do lado esquerdo.
    ```` c 
    int a = 5;
    a *= 3; // a é agora 15
    ````
- (/=): Divide a variável do lado esquerdo pelo valor do lado direito e atribui o resultado à variável do lado esquerdo.
```` c
    int a = 5;
    a /= 2; // a é agora 2
````
- (%=): Calcula o módulo da variável do lado esquerdo pelo valor do lado direito e atribui o resultado à variável do lado esquerdo.
```` c
    int a = 5;
    a %= 2; // a é agora 1
````
# Operadores de auto-incremento e auto-decremento (`++`, `--`): 
- Os operadores de incremento e decremento em C são usados para aumentar ou diminuir o valor de uma variável em 1. 

## 1. Incremento (++): Aumenta o valor da variável em 1. 
- Existem duas formas:
    - Pré-incremento (`++x`): O valor da variável é incrementado antes da execução da instrução atual.
    - Pós-incremento (`x++`): O valor da variável é incrementado após a execução da instrução atual.
    ```c
    int x = 5;
    ++x; // x é agora 6
    x++; // x é agora 7
    ```

## 2. Decremento (--)**: Diminui o valor da variável em 1.
- Existem duas formas:
    - Pré-decremento (`--x`): O valor da variável é decrementado antes da execução da instrução atual.
    - Pós-decremento (`x--`): O valor da variável é decrementado após a execução da instrução atual.
    ```c
    int x = 5;
    --x; // x é agora 4
    x--; // x é agora 3
    ```
# Operadores lógicos
## 1. Menor que (`<`):
- Retorna verdadeiro se o primeiro valor for menor que o segundo.
## 2. Maior que (`>`): 
- Retorna verdadeiro se o primeiro valor for maior que o segundo.
## Menor ou igual a (`<=`):
- Retorna verdadeiro se o primeiro valor for menor ou igual ao segundo.
## Maior ou igual a (`>=`): 
- Retorna verdadeiro se o primeiro valor for maior ou igual ao segundo.
## Igual a (`==`): 
- Retorna verdadeiro se os dois valores forem iguais.
## Diferente de (`!=`):
- Retorna verdadeiro se os dois valores forem diferentes.


# Observações sobre Mart.h 
- `sqrt(x)`: Calcula a raiz quadrada de `x`.

- `pow(x, y)`: Eleva `x` à potência `y`.

- `sin(x)`: Calcula o seno do ângulo `x` (em radianos).

- `cos(x)`: Calcula o cosseno do ângulo `x` (em radianos).

- `tan(x)`: Calcula a tangente do ângulo `x` (em radianos).

- `log(x)`: Calcula o logaritmo natural de `x`.

- `log10(x)`: Calcula o logaritmo de `x` na base 10.
