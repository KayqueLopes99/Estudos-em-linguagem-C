#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int n = 6;
	int h;

	printf("=============== Requisitos para andar nos brinquedos =============\n");
	printf("===============   Informe sua altura em centímetro   =============\n");
	printf("============== Requisitos altura >= 90 e altura <= 200 ===========\n");
	scanf("%d", &h);
	while (h < 90 || h > 200) {
        printf("A altura deve estar entre 90 e 200. Tente novamente: ");
        scanf("%d", &h);
    }
	printf("Altura aceita. Verificando os brinquedos...\n");
		int cont = 0;
		printf("Informe as alturas mínimas dos 6 brinquedos:\n");
		for(int i = 0; i < n; i++)
		{
			int altura_minima;
			scanf("%d", &altura_minima);

			if (h >= altura_minima)
			{
				cont++;
			}
		}
		printf("Pode ir em %d brinquedos.\n", cont);
	
	
	


	return 0;
}





