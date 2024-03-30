#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <windows.h>

#define MAXIMO 1000

struct Email {
    char endereco[70];
};

int validade(char endereco[], struct Email emails[], int nemails) {
    if (strlen(endereco) < 70) {
        for (int i = 0; i < nemails; i++) {
            if (strcmp(endereco, emails[i].endereco) == 0) {
                return 0;
            }
        }
        if (strstr(endereco, "@") != NULL && (strstr(endereco, "hotmail") || strstr(endereco, "gmail")) && strstr(endereco, ".com")) {
            return 1; // E-mail válido
        }
    } else {
        return 0;
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    char login[50], senha[50], usuario[50], pass[50];

    printf("-------------------------------------------------------------\n");
    printf("----------------  CADASTRAMENTO  -----------------\n");
    printf("-------------------------------------------------\n");
    printf("-------INFORME SEUS DADOS PARA PROSSEGUIR -------\n");
    printf("Cadastre um nome para o usuário: ");
    scanf("%s", login);
    printf("Cadastre uma senha para o usuário %s: ", login);
    scanf("%s", senha);
    printf("\n%s, Você foi cadastrado no sistema!\n\n", login);
    printf("--------------------------------------------------------------\n");
    printf("------------------------- FAÇA SEU LOGIN ----------------------\n");
    printf("Informe seu usuário: ");
    scanf("%s", usuario);
    printf("Informe sua senha: ");
    scanf("%s", pass);
    printf("-----------------------------------------------------------------\n");
    printf("Verificando usuário e senha...\n");
    while (strcmp(usuario, login) != 0 || strcmp(pass, senha) != 0) {
        printf("Usuário ou senha incorretos, informe as informações novamente\n\n");
        printf("Informe o usuário: ");
        scanf("%s", usuario);
        printf("Informe a senha: ");
        scanf("%s", pass);
    }
    printf("LOGIN FOI CONCLUÍDO\n");
    printf("--------------------PARA FINALIZAR O CADASTRO-----------------------\n");
    printf("----------INFORME UM ENDEREÇO DE E-MAIL VÁLIDO----------\n");
    // Continuação do código...
    return 0;
}
