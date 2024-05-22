### Função int main
# Definição
- Está presente em todo código, é a parte fundamental do algoritmo.
# Sintaxe:
```c
int main(<comando_se_preciso>){
return 0;
}
```
# Exemplo:
``` c
int main (){
    printf("Hello world!");
    return 0;
}
```
# Curiosidades 
- Será que séria possível fazer um código sem usar o int main(){}??
  acredito que não em (*O*);
### Printf
# Definição
- É uma das funções mais usadas na linguagem C e é um padrão na linguagem. 
- Usada para enviar informações ao terminal e imprimi-las na tela.

# Sintaxe 
- Para digitar na tela.
``` c
printf("Dados e descrições");
```
- Para imprimir um resultado ou varíavel.
```c
printf("Dados e descrições %<formatador>", variaveis_desejadas);
```
# Exemplo 
``` c
#include <stdio.h>
int main() {
    int numero = 9;
    printf("O número é: %d\n", numero);
    return 0;
}
```

# Curiosidades e funcionalidades
- No printf podemos colocar uma operação dentro dele.
. Exemplo:
``` c
printf("A área é: %d", c = a + b); // Irá imprimir a descrição e o resultado da área.
```
- No printf colocamos dentro dele nas "", %Sigla do tipo da Variável para impressão.


## Formatadores %

- %c: Caracteres simples (tipo char)
- %d: Inteiro (tipo int)
- %f: Ponto flutuante (tipo float)
- %s: String
- %lf: Tipo double
- %ld: Tipo long int


## Detalhes em outras bibliotecas 
## Sprintf
- Usada para criar uma string formatada. Funciona de maneira semelhante ao printf(),
  o diferencial é que ela salva a saída em uma string.
- Sintaxe : 
``` c
sprintf(variavel_string, "formato", variaveis);
```
- Exemplo: 
``` c
#include <stdio.h>
int main() {
    char dispenser[50]; // Crei um dispenser para armazenar a string formatada.
    int a = 10, b = 20, c;

    c = a + b; // Soma

    // Usa sprintf para formatar a string e armazená-la no dispenser.
    sprintf(dispenser, "A soma de %d e %d é %d", a, b, c);

    printf("%s", dispenser); // Imprime a string formatada.

    return 0;
}
``` 