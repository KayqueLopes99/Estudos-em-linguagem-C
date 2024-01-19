//Faça um progama que receba o salário de um funcionário e o percentual
//de aumento, calcule e mostre o valor do aumento e novo salário.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 

int main(int argc, char *argv[]) {
	
	// Configurar para permitir a exibição de caracteres acentuados
	setlocale(LC_ALL, "Portuguese");

	float sal, perc, aumento, novo_sal;

	// Solicitar ao usuário que insira o salário
	printf("Insira o salário:\n");
	scanf("%f", &sal);

	// Solicitar ao usuário que insira o percentual de aumento
	printf("Insira o percentual:\n");
	scanf("%f", &perc);
	
	// Calcular o valor do aumento com base no salário e percentual fornecidos
	aumento = sal * perc / 100;
	
	// Calcular o novo salário somando o aumento ao salário original
	novo_sal = sal + aumento;

	// Exibir o valor do aumento e o novo salário com duas casas decimais
	printf("Valor do aumento: %.2f.\n", aumento);
	printf("Valor do novo salário: %.2f.\n", novo_sal);

	// Pausar a execução para visualização do desenvolvimento
	system("pause");

	// Indicar que o programa foi concluído com sucesso
	return 0;
}
