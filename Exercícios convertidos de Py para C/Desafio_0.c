// Crie um programa que digite "Olá mundo" na tela. 
#include <stdio.h>

int main(void) {
    char mensagem[100];
    
    printf("Escreva Algo na Mensagem:\n");
    scanf("%[^\n]", mensagem);
    printf("%s", mensagem);

    return 0;
}
