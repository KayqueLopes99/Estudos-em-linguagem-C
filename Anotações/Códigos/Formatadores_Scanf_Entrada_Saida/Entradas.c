#include <stdio.h>
	//entreda de dados e gravae eles = scanf
	// scanf(%letra com alguma coisa, &variavel que você vai guardar, &...);
int main(){

	int idade = 0;
	float peso = 0.0; 
	printf("Cadastramento de individualidades dos herois!\n");
		
	printf("Digite sua idade:\n");
	scanf("%d", &idade);
	
    printf("Digite seu peso:\n");
	scanf("%f", &peso);
	
	printf("Idade informada: %d.\n", idade);
	printf("peso informado: %f.\n", peso);
	
}