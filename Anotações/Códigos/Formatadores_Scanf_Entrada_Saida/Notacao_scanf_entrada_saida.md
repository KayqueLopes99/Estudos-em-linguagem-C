## Scanf 
# Definição:
- É usada para ler dados formatados da entrada padrão via teclado.
- Ela permite receber dados do usuário.
# Sintaxe:
- scanf("%Especificador_de_formato", &variavel);
# Exemplo:
- #include <stdio.h>

int main() {
    float numero;
    printf("Digite um numerozinho: ");
    scanf("%f", &numero);
    printf("Você digitou: %d\n", numero);
    return 0;
}
# Funcionalidade: 
- Permite que os programas interajam com o usuário, recebendo dados de entrada.
# Curiosidade:
- Ler uma string: 
. Você pode usar scanf para ler uma string do teclado.
. Este código lerá a primeira palavra (até o primeiro espaço).
- char palavras[100];
scanf("%s", palavras);

. Se você quiser ler uma linha inteira (até o ENTER ser pressionado), você pode fazer1:
- char palavras[100];
scanf("%100[^\n]", palavras);

- Ler vários valores:
. scanf também pode ser usado para ler vários valores de uma vez.
- int a, b;
scanf("%d %d", &a, &b);

- Podemos colocar quantos caracteres no maximo podemos ler, tipo em caso de validação de entrada com letras.
- Colocamos quando uma string[100]
- scanf("%99s", entrada);