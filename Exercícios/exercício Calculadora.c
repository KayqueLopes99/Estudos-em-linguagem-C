//Desenvolva um algoritmo que simule ums calculadora.
//você deve dar a opção de o usuário escolher entre:
// 1 - Somar; 2 - Subtrair; 3 - Multiplicar; 4 - dividir;
// O usuário só conseguirá processar dois números inteiros por
//sua vez.
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
    setlocale(LC_ALL, "Portuguese");

    int op;
	float n1, n2, resp;

    do {
        printf("Digite 1 para somar\n");
        printf("Digite 2 para subtrair\n");
        printf("Digite 3 para multiplicar\n");
        printf("Digite 4 para dividir\n");
        printf("Digite 5 para sair\n"); 
        scanf("%d", &op);

		printf("insira o primeiro número:\n");
		scanf("%f", &n1);
			printf("insira o segundo número:\n");
		scanf("%f", &n2);
        switch (op) {
        case 1:
            // Coloque o código para a operação de soma
            printf("Você escolheu somar.\n");
            resp = n1 + n2;
            printf("RESPOSTA: %.2f.\n", resp);
            break;
        case 2:
            // Coloque o código para a operação de subtração
            printf("Você escolheu subtrair.\n");
            resp = n1 - n2;
            printf("RESPOSTA: %2f.\n", resp);
            break;
        case 3:
            // Coloque o código para a operação de multiplicação
            printf("Você escolheu multiplicar.\n");
            resp = n1 * n2;
            printf("RESPOSTA: %.2f.\n", resp);
            break;
        case 4:
            // Coloque o código para a operação de divisão
            printf("Você escolheu dividir.\n");
            resp = n1 / n2;
            printf("RESPOSTA: %.2f.\n", resp);
            break;
        case 5:
            // opção para sair
            printf("Saindo do programa.\n");
            break;
        default:
            printf("Opção inválida.\n");
            break;
        }
    } while (op != 5); 

    system("pause");
    return 0;
}
