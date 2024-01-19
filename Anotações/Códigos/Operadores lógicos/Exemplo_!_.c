#include <stdio.h>
// PROGRAMA QUE RECEBA UM NÚMERO E INFORME SE ELE É POSITIVO.
int main(){
	int N;
	printf("Indorme um número\n");
	scanf("%d", &N);
	
	if(!(N>0)){
		printf("O numero nao e positivo\n");
	}
	else{
		printf("positivo\n");
	}
}