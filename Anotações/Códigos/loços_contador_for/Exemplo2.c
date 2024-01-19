#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int i;
	for(i = 1; i <= 1000; i++)
	{
		printf("%d ", i);

		if(i == 500)
		{
			break;
		}

	}
}
