#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int dado = 10;
	printf("Dado antes do incremento: %d.\n", dado);

	dado++;
	printf("Depois do incremento: %d.\n", dado);

	dado--;
	printf("Depois do decremento: %d.\n", dado);

	dado += 3;
	printf("Depois do incremento em 3 unidades: %d.\n", dado);

	dado -= 2;
	printf("Depois do decremento em 2 unidades: %d.\n", dado);
	
	dado *= 10;
	printf("Depois de multiplicar por 10: %d.\n", dado);
	
	return 0;
}
// operadores de atribuição;

//+= (adição): x += 3; é equivalente a x = x + 3;
//Adiciona o valor à direita do operador ao valor da variável à esquerda.
//-= (subtração): y -= 4; é equivalente a y = y - 4;
//Subtrai o valor à direita do operador do valor da variável à esquerda.
//*= (multiplicação): a *= 2; é equivalente a a = a * 2;
//Multiplica o valor da variável à esquerda pelo valor à direita do operador.
// /= (divisão): b /= 4; é equivalente a b = b / 4;
//Divide o valor da variável à esquerda pelo valor à direita do operad