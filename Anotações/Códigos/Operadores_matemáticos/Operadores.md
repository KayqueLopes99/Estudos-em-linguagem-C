## Operadores matemáticos
Aqui estão os queridos:

1. Adição (+): soma números.
   - int soma = 5 + 3; // soma é 8

2. Subtração (-): Subtrai números do primeiro.
   - int subtracao = 5 - 3; // subtracao é 2

3. Multiplicação (*): Multiplica números.
   - int multiplicacao = 5 * 3; // multiplicacao é 15

4. Divisão (/): Divide o primeiro número pelo segundo.
   - int divisao = 5 / 2; // divisao é 2
    float divisaoReal = 5.0 / 2.0; // divisaoReal é 2.5

5. Módulo (%): Retorna o resto da divisão do primeiro número pelo segundo.
   - int modulo = 5 % 2; // modulo é 1

#  Operadores compostos de atribuição 
. Usados para atribuir o resultado de uma expressão a uma variável.

1. (=): Atribui o valor do lado direito à variável do lado esquerdo.
    - int a = 5; // a é agora 5
    
2. (+=): Adiciona o valor do lado direito à variável do lado esquerdo e atribui o resultado à variável do lado esquerdo.
   - int a = 5;
    a += 3; // a é agora 8

3. (-=): Subtrai o valor do lado direito da variável do lado esquerdo e atribui o resultado à variável do lado esquerdo.
   - int a = 5;
    a -= 3; // a é agora 2

4. (*=): Multiplica a variável do lado esquerdo pelo valor do lado direito e atribui o resultado à variável do lado esquerdo.
    - int a = 5;
    a *= 3; // a é agora 15

5. (/=): Divide a variável do lado esquerdo pelo valor do lado direito e atribui o resultado à variável do lado esquerdo.
    int a = 5;
    a /= 2; // a é agora 2

6. (%=): Calcula o módulo da variável do lado esquerdo pelo valor do lado direito e atribui o resultado à variável do lado esquerdo.
    
    int a = 5;
    a %= 2; // a é agora 1

# Operadores de auto-incremento e auto-decremento (`++`, `--`): 
Os operadores de incremento e decremento em C são usados para aumentar ou diminuir o valor de uma variável em 1. Aqui estão eles:

1. Incremento (++): Aumenta o valor da variável em 1. 
- Existem duas formas:
    - Pré-incremento (`++x`): O valor da variável é incrementado antes da execução da instrução atual.
    - Pós-incremento (`x++`): O valor da variável é incrementado após a execução da instrução atual.
    ```c
    int x = 5;
    ++x; // x é agora 6
    x++; // x é agora 7
    ```

2. Decremento (--)**: Diminui o valor da variável em 1.
- Existem duas formas:
    - Pré-decremento (`--x`): O valor da variável é decrementado antes da execução da instrução atual.
    - Pós-decremento (`x--`): O valor da variável é decrementado após a execução da instrução atual.
    ```c
    int x = 5;
    --x; // x é agora 4
    x--; // x é agora 3
    ```
# Operadores lógicos
1. Menor que (`<`): Retorna verdadeiro se o primeiro valor for menor que o segundo.
2. Maior que (`>`): Retorna verdadeiro se o primeiro valor for maior que o segundo.
3. Menor ou igual a (`<=`): Retorna verdadeiro se o primeiro valor for menor ou igual ao segundo.
4. Maior ou igual a (`>=`): Retorna verdadeiro se o primeiro valor for maior ou igual ao segundo.
5. Igual a (`==`): Retorna verdadeiro se os dois valores forem iguais.
6. Diferente de (`!=`): Retorna verdadeiro se os dois valores forem diferentes.


# Observações sobre Mart.h 
1. `floor(x)`: Arredonda `x` para baixo para o número inteiro mais próximo.

2. `ceil(x)`: Arredonda `x` para cima para o número inteiro mais próximo.

3. `sqrt(x)`: Calcula a raiz quadrada de `x`.

4. `pow(x, y)`: Eleva `x` à potência `y`.

5. `sin(x)`: Calcula o seno do ângulo `x` (em radianos).

6. `cos(x)`: Calcula o cosseno do ângulo `x` (em radianos).

7. `tan(x)`: Calcula a tangente do ângulo `x` (em radianos).

8. `log(x)`: Calcula o logaritmo natural de `x`.

9. `log10(x)`: Calcula o logaritmo de `x` na base 10.

10. `acos(x)`: Retorna o arco cosseno de `x`.

11. `asin(x)`: Retorna o arco seno de `x`.

12. `atan(x)`: Retorna o arco tangente de `x`.

13. `atan2(y, x)`: Retorna o arco tangente de `y / x`.

14. `exp(x)`: Retorna o número de Euler (~2.71) elevado a `x`.

