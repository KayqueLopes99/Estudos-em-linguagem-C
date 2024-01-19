## Estrutura de decisão multípla 
# Swich(escolha) 
# Case(caso) 
# Breack(pare) 
# Default(outrocaso) 
# Continue(continuar)
- Exemplo no For:
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int i;
	for(i=1; i<=10; i++)
	{

		if(i == 5)
		{
			continue;
		}
		printf("%d ", i);
	}
}
