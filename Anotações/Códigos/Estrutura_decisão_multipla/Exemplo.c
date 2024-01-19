#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int d;
	printf("=Menu de tipagens dos pokémons:=\n");
	printf("=1 - tipo Grama=\n");
	printf("=2 - tipo Fogo=\n");
	printf("=3 - tipo Água=\n");
	printf("=4 - tipo Elétrico=\n");
	printf("=5 - tipo Pedra=\n");
	printf("=6 - tipo Terra=\n");
	printf("=7 - tipo Psíquico=\n");
	printf("=8-  tipo Fantasma=\n");
	printf("=9   tipo Fada=\n");
	printf("=10  tipo Dragão=\n");
	printf("=11  tipo Aço=\n");
	printf("=12  tipo Escuro=\n");
	printf("=13  tipo Lutador=\n");
	printf("=14  tipo Normal=\n");
	printf("=15  tipo Gelo=\n");
	printf("=16  tipo Inseto=\n");
	printf("=17  tipo Voador=\n");
	printf("=18  tipo Venenoso=\n");
	scanf("%d", &d);

	switch(d)
	{
	case 1:
		printf("pokedex  grama:\n");
		break;
	case 2:
		printf("pokedex  fogo:\n");
		break;
	case 3:
		printf("pokedex  água");
		break;
	case 4:
		printf("pokedex  elétrica:\n");
		break;
	case 5:
		printf("pokedex  pedra:\n");
		break;
	case 6:
		printf("pokedex  terra:\n");
		break;
	case 7:
		printf("pokedex  psíquico:\n");
		break;
	case 8:
		printf("pokedex  fantasma:\n");
		break;
	case 9:
		printf("pokedex fada:\n");
		break;
	case 10:
		printf("pokedex dragão:\n");
		break;
	case 11:
		printf("pokedex aço:\n");
		break;
	case 12:
		printf("pokedex escuro:\n");
		break;
	case 13:
		printf("pokedex lutador:\n");
		break;
	case 14:
		printf("pokedex normal:\n");
		break;
	case 15:
		printf("pokedex gelo:\n");
		break;
	case 16:
		printf("pokedex inseto:\n");
		break;
	case 17:
		printf("pokedex voador:\n");
		break;
	case 18:
		printf("pokedex venenoso:\n");
		break;
	default:
		printf("invalidade do número\n");





		return 0;
	}
}