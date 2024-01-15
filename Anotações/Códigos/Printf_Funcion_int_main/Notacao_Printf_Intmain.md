### Função int main
# Definição
- Está presente em todo código, é a parte fundamental do algoritmo.
# Sintaxe 
int main(<comando_se_preciso>){
return 0;
}
# Exemplo:
- int main (){
    printf("Hello world!");
    return 0;
}
# Curiosidades 
- Será que séria possível fazer um código sem usar o int main(){}??
  acredito que não em (*O*);
### Printf
# Definição
- É uma das funções mais usadas na linguagem C e é um padrão na linguagem. 
- Usada para enviar informações ao terminal e imprimi-las na tela.

# Sintaxe 
. Para digitar na tela.
- printf("Dados e descrições");
. Para imprimir um resultado ou varíavel.
- printf("Dados e descrições <%formatador>", variaveis desejadas);

# Exemplo 
- #include <stdio.h>
int main() {
    int numero = 9;
    printf("O número é: %d\n", numero);
    return 0;
}

# Curiosidades e funcionalidades
- No printf podemos colocar uma operação dentro dele.
. Exemplo:
- printf("A área é: %d", c = a + b); // Irá imprimir a descrição e o resultado da área.

- No printf colocamos dentro dele nas "", %Sigla do tipo da Variável para impressão.
. Exemplo:
- printf("A área é: %d", c = a + b); // Temos %d que é do tipo inteiro da varíavel c.


Aqui estão alguns dos especificadores de formato mais utilizados3:

%c: Caracteres simples (tipo char)
%d: Inteiro (tipo int)
%e: Notação científica
%f: Ponto flutuante (tipo float)
%g: %e ou %f (mais curto)
%o: Octal
%s: String
%u: Inteiro sem sinal
%x: Hexadecimal
%lf: Tipo double
%ld: Tipo long int

## Detalhes em outras bibliotecas 
## Sprintf
. Usada para criar uma string formatada. Funciona de maneira semelhante ao printf(),
  o diferencial é que ela salva a saída em uma string.
. Sintaxe : 
- sprintf(variavel_string, "formato", variaveis);
. Exemplo: 
- #include <stdio.h>
int main() {
    char dispenser[50]; // Crei um dispenser para armazenar a string formatada.
    int a = 10, b = 20, c;

    c = a + b; // Soma

    // Usa sprintf para formatar a string e armazená-la no dispenser.
    sprintf(dispenser, "A soma de %d e %d é %d", a, b, c);

    printf("%s", dispenser); // Imprime a string formatada.

    return 0;
}
