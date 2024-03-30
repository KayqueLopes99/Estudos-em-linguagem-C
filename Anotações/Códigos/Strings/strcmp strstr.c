#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <windows.h>
//e
#define MAXIMO 1000

struct Email{
	char endereco[70];
};

int validade(char endereco[], struct Email emails[], int nemails){
	if(strlen(endereco) < 70){
		for(int i = 0; i < nemails; i++){
			if (strcmp(endereco, emails[i].endereco) == 0){
				return 0 ;
			}
		}
		if (strstr(endereco, "@") != NULL && (strstr(endereco, "hotmail") || strstr(endereco, "gmail")) && strstr(endereco, ".com")) {
            return 1; // E-mail válido
        }
	}
	else {
		return 0;
	}
}
int main()
{
  setlocale(LC_ALL, "Portuguese");
  
  char login[50], senha[50], usuario[50], pass[50];
   
 printf("-------------------------------------------------------------\n");
    printf("----------------  CADASTRAMENTO  -----------------\n");
    printf("-------------------------------------------------\n");
    printf("-------INFORME SEUS DADOS PARA PROSSEGUIR -------\n"); 
    printf("Cadastre um nome para o usuário: ", login);
    scanf("%s", login);
    printf("Cadastre uma senha para o usuario %s: ", login);
    scanf("%s", senha);
    printf("\n%s, Você foi cadastrado no sistema!\n\n", login);
 printf("--------------------------------------------------------------\n");
 printf("------------------------- FAÇA SEU LOGIN ----------------------\n");
 printf("Informe seu usuário: ");
 scanf("%s", usuario);
 printf("informe sua senha: ");
 scanf("%s", pass);
 printf("-----------------------------------------------------------------\n");
 printf("Verificando usuário e senha....\n");
 while (strcmp(usuario, login) != 0 || strcmp(pass, senha) != 0){
 printf("Usuario ou senha incorretos, informe as informações novamente\n\n");
 printf("Informe o usuário: ");
 scanf("%s", usuario);
 printf("Informe a senha: ");
 scanf("%s", pass);
 }
 printf("LOGIN FOI CONCLUIDO\n");
 printf("--------------------PARA FINALIZAR O CADASTRO-----------------------\n");
 printf("----------INFORME UM ENDEREÇO DE E-MAIL VÁLIDO----------------------\n");

struct Email emails[MAXIMO];
int nemails = 0;
char endereco[70];
    char resp;
printf("--------------------- CADASTRO DE E-MAILS ---------------------------\n");
do {
        printf("informe o seu email ou cadastre um novo EMAIL para %s: ", login );
        scanf("%s", endereco);

        while (!validade(endereco, emails, nemails)) {
            printf("E-mail inválido ou já cadastrado. Por favor, insira um e-mail válido: ");
            scanf("%s", endereco);
        }
        
        strcpy(emails[nemails].endereco, endereco);
        nemails++;
        printf("===== E-MAIL CADASTRADO COM SUCESSO !!!! ====\n");
         printf("Deseja adicionar outro e-mail? SIM(S)OU NÃO(N): ");
        scanf(" %c", &resp);
}while ((resp == 'S' || resp == 's' ) && nemails < MAXIMO);
if (nemails == MAXIMO) {
        printf("Limite máximo de e-mails cadastrados atingido.\n");
    } else {
        printf("Cadastro de e-mails encerrado.\n");
    }
    
    
    
    
    printf("================================== LOGIN FOI CONCLUÍDO ====================================\n");
    printf("-------------------------------------------------------------------------------------------\n");
    printf("-----------------  BEM-VINDO %s AO MULTI-SUPERMERCADO VIRTUAL  ---------------------\n", login);
    printf("------- NOSSO SUPERMERCADO É UM PROJETO PARA AJUDAR A HUMANIDADE E PRINCIPALMENTE ---------\n");
    printf("---PARA AQUELAS PESSOAS QUE NÃO PODEM SE LOCOMOVER, POR MOTIVOS PESSOAIS OU LOCACIONAIS.---\n");
    printf("----- VOCÊ VAI ENCONTRAR MUITOS PRODUTOS NESSE SITE, POIS NOSSA EMPRESA TEM PARCERIAS------\n");
    printf("----- COM OUTRAS INSTITUIÇÕES RELACIONADAS AO TRANSPORTE DE TODOS OS NOSSOS PRODUTOS ------\n");
    printf("---- CONFIABILIDADE, PROTEÇÃO E SEGURANÇA, SÃO AS PRINCIPAIS PALAVRAS CHAVE QUE DEFINEM----\n");
    printf("NOSSO SUPERMERCADO VIRTUAL, ESTAMOS FELIZES EM RECEBÊ-LO(A) AQUI, EXPLORE NOSSOS CORREDORES\n");
    printf("--------------- REPLETOS DE PRODUTOS DE ALTA QUALIDADE, TENHA UM BOM DIA.------------------\n");


    return 0;
    
 }