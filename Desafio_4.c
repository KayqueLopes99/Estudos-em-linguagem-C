#include <stdio.h>
#include <ctype.h>

int main(void){
char frase[100];
int letras = 0;
int numeros_letras = 0;
int numeros = 0;
int i;
printf("Informe uma frase com Letras e Numeros: \n");
scanf("%[^\n]", frase);
for(i = 0; frase[i] != '\0'; i++){
    if(isalpha(frase[i])){
        letras++;
    }
    if(isalnum(frase[i])) {
            numeros_letras++;
        }
    if(isdigit(frase[i])) {
            numeros++;
        }
}

    printf("Caracteres alfabeticos: %d\n", letras);
    printf("Caracteres alfanumericos: %d\n", numeros_letras);
    printf("Caracteres numericos: %d\n", numeros);

    return 0;
}