# String

- Em C, uma string é uma sequência de caracteres terminada por um caractere nulo (`\0`). 
- A string é representada como um array de caracteres.

## Declaração de uma string:`
````c
char nome_da_string[tamanho];
````
- Exemplo:
````c
char minha_string[50];
// declarando um array de 50 caracteres.
// o último caractere é o caractere nulo (`'\0'`).

````


## Inicializar:
- o momento da declaração:
````c
char minha_string[] = "Olá, mundo!";
````
- Ou
````c
char minha_string[50];
strcpy(minha_string, "Olá, mundo!");
````
## Tanto na leitura, quanto na impressão, usamos o formatador %s, para melhor funcionamento.


## Leitura:

- Para ler
````c
char minha_string[50];
printf("Digite uma string: ");
scanf("%s", minha_string);
````
## Impressão:
````c
char minha_string[] = "Olá, mundo!";
printf("%s\n", minha_string);
````


## Sprintf e Sscaf:
### sprintf
- A função é usada para formatar e armazenar uma string. 

A sintaxe:

```c
int sprintf(char *str, "Formatação %", nome das variaveis...);
```
- str: Este é o buffer onde a string formatada será armazenada.

- Exemplo:

```c
#include <stdio.h>

int main() {
    char buffer[50];
    int a = 10, b = 20, c;
    c = a + b;
    sprintf(buffer, "Soma de %d e %d é %d", a, b, c);
    printf("%s", buffer);
    return 0;
}
```

### sscanf:

A função é usada para ler dados formatados de uma string.

A sintaxe:

```c
int sscanf(nome_string, "Formatação %", veriaveis, &varoaveis);
```

- Exemplo:

```c
#include <stdio.h>

int main() {
    char *str = "Tom Gerente 28";
    char nome[10], cargo[10];
    int idade;
    sscanf(str, "%s %s %d", nome, cargo, &idade);
    printf("Nome: %s\n", nome);
    printf("Cargo: %s\n", cargo);
    printf("Idade: %d\n", idade);
    return 0;
}
```




## Puts:

- A função é usada para imprimir uma string na tela.
- Adiciona \n no fluxo de saída. 
- Exemplo:

```c
#include <stdio.h>

int main() {
    char *minha_string = "Olá, mundo!";
    puts(minha_string);
    return 0;
}
```

## Fgets:

- A função permite que você especifique o número máximo de caracteres a serem lidos, incluindo o caractere nulo ('\0').

- Sintaxe:
```c
char *fgets(minha_string, int numero_max_caractes, FILE *ponteiro_fluxo);
```

- Exemplo:
```c
#include <stdio.h>

int main() {
    char minha_string[50];
    printf("Digite uma string: ");
    fgets(minha_string, 50, stdin);
    printf("%s\n", minha_string);
    return 0;
}
```
## Posição:
- Em C, as queridas são armazenadas como arrays de caracteres.
- Cada caractere em uma string tem uma posição específica no array, começando por 0. 


- Por exemplo:

```c
char minha_string[] = "Olá";
```

- Posição:

- `minha_string[0]` é `'O'`
- `minha_string[1]` é `'l'`
- `minha_string[2]` é `'á'`
- `minha_string[3]` é `'\0'` // final

Note que a posição final em uma string sempre contém o caractere nulo (`'\0'`), que indica o final da string.

- Acessar ou modificar caracteres individuais em uma string usando sua posição. 

```c
#include <stdio.h>

int main() {
    char minha_string[] = "Olá";
    printf("O primeiro caractere é: %c\n", minha_string[0]);  // Imprime: O primeiro caractere é: O
    minha_string[0] = 'A';
    printf("A string modificada é: %s\n", minha_string);  // Imprime: A string modificada é: Alá
    return 0;
}
```



























## Manipulação de strings em C

- A biblioteca `string.h` que contém várias funções para manipular strings.

## strcpy

- Ela copia a string de origem, incluindo o caractere nulo, para a string de destino.

```c
char *strcpy(char *destino, const char *origem);

Exemplo:

char origem[50] = "Olá, mundo!";
char destino[50];
strcpy(destino, origem);
printf("%s\n", destino);  // Saída: Olá, mundo!
```

## strcat
- Ela anexa a string de origem à string de destino.
```c
char *strcat(char *destino, const char *origem);
```
Exemplo:
```c
char str[50] = "Olá";
strcat(str, ", mundo!");
printf("%s\n", str);  // Saída: Olá, mundo!
```

## strlen
-  Ela conta todos os caracteres até, mas não incluindo, o caractere nulo final.
```c
size_t strlen(const char *str);
```
- Exemplo:
``` c
char str[] = "Olá, mundo!";
printf("%zu\n", strlen(str));  // Saída: 12
```

## strcmp
- Comparar duas strings.
```c
int strcmp(const char *str1, const char *str2);
```
- Exemplo:
```c
char str1[] = "abc";
char str2[] = "abd";
printf("%d\n", strcmp(str1, str2));  // Saída: -1
```

## strstr
- Ela localiza a primeira ocorrência de uma substring em uma string. - Retorna a NULL se a substring não for encontrada.
```c
char *strstr(const char *haystack, const char *needle);
```
- Exemplo:
``` c
char texto[] = "Olá, mundo!";
char *substr = strstr(texto, "mundo");
printf("%s\n", substr);  // Saída: mundo!
```

## strcspn

```c
size_t strcspn(const char *str1, const char *str2);
```

- `str1`: é a string na qual a função procura o segmento.
- `str2`: é a string que contém o conjunto de caracteres a serem correspondidos.


- Verificar se o nome do cliente contém algum número:

```c
void adicionaCliente(int *q)
{
    // Obrigatoriamente, o primeiro digito do nome deve ser maiusculo, implementar mais tarde
    struct cliente Aux;
    FILE *arquivo;
    arquivo = fopen("../Dados/DadosClientes.txt", "a");
    if (arquivo == NULL)
    {
        printf("Erro ao abrir o arquivo para escrita.\n");
        return;
    }

    // Loop para verificar o nome
    do
    {
        printf("Digite o nome do cliente: \n");
        scanf(" %[^\n]", Aux.nome);
        if (strcspn(Aux.nome, "0123456789") == strlen(Aux.nome))
        {
            break;
        }
        else
        {
            printf("Nome invalido. O nome não deve conter números.\n");
        }
    } while (1);

    // Solicita o e-mail
    printf("Digite o e-mail: \n");
    scanf(" %[^\n]", Aux.email);
    if (strstr(Aux.email, "@") != NULL && (strstr(Aux.email, "hotmail.com") || strstr(Aux.email, "gmail.com")))
    {
        fprintf(arquivo, "%s\t%s\n", Aux.nome, Aux.email);
        (*q)++;
    }
    else
    {
        printf("E-mail invalido. O e-mail deve conter @ e também hotmail.com ou gmail.com.\n");
    }

    fclose(arquivo);
}
```

- Neste código, `strcspn(Aux.nome, "0123456789")` retorna o número de caracteres iniciais em `Aux.nome` que não são números.

## strlen
A sintaxe:

```c
size_t strlen(const char *str);
```
- `str`: é a string cujo comprimento você deseja calcular.

- A função `strlen` retorna o número de caracteres na string `str`, excluindo o caractere nulo de terminação (`'\0'`).


```c
#include <string.h>
#include <stdio.h>

int main() {
    const char *str = "Hello";
    size_t length;

    length = strlen(str);

    printf("O comprimento da string '%s' é %zu.\n", str, length);

    return 0;
}
```

- Quando você executa este código, ele imprimirá: `O comprimento da string 'Hello' é 5.`