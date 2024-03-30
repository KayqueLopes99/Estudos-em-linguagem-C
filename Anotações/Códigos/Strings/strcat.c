#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 50

int main()
{
    // Configuração da localização para suportar caracteres acentuados
    setlocale(LC_ALL, "Portuguese");

    // Definição de duas strings
    char s1[N] = {"L�gica de"};
    char s2[N] = {" Programação!"};

    // Exibe as strings antes de utilizar a função strcat
    printf("Antes do strcat:\n");
    printf("str1: %s\n", s1);
    printf("str2: %s\n", s2);

    // Concatena s2 ao final de s1
    strcat(s1, s2);

    // Exibe a string resultante apos utilizar a função strcat
    printf("Depois do strcat:\n");
    puts(s1);  // Exibe a string s1

    return 0;
}

