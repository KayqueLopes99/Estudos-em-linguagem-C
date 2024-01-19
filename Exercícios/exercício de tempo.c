//Jeremias possui um cronômetro que consegue marcar
//o tempo apenas em segundos. Sabendo disso, desenvolva
//um algoritmo que receba o tempo cronometrado, em segundos,
//e diga quantas horas, minutos e segundos se passaram a partir
//do tempo cronometrado

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int seg, min, hora;
	printf("Informe o tempo em segundos\n");
	scanf("%d", &seg);

	hora = seg / 3600;
	seg  = seg - (3600 * hora);
	min = seg / 60;
	seg = seg - (60 * min);


	printf("Horas: %d.\n", hora);
	printf("Minutos: %d.\n", min);
	printf("Segundos: %d.\n", seg);

	system("pause");
	return 0;
}
