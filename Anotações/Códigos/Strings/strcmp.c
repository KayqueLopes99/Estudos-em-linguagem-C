#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 50

int main()
{
    // Configuração da localização para suportar caracteres acentuados
    setlocale(LC_ALL, "Portuguese");

    char hardText[N] = {"/exit"};  // Definindo uma string predefinida
    char senha_usr[N];  // Variável para armazenar o texto digitado pelo usuário
    int ok;  // Variável para armazenar o resultado da comparação de strings

    printf("Digite um texto:\n");
    gets(senha_usr);  // Obtendo o texto do usuário (cuidado: gets é considerada insegura)

    ok = strcmp(hardText, senha_usr);  // Comparando as strings

    if(ok == 0)
        printf("Texto iguais.\n");  // Se as strings forem iguais
    else 
        printf("Textos diferentes");  // Se as strings forem diferentes
}
