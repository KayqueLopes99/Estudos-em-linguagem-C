#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int i = 0;
	printf("informe o número da geração de pokémon\n");
scanf("%d", &i);
	while(i <= 100)
	{
		printf("%d ", i+1);
		i++;
	}

	return 0;
}
