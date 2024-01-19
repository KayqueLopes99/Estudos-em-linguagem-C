#include <stdio.h>
// PROGRAMA QUE RECEBE 3 NÚMEROS INTEIROS E FALA O MENOR DELES.
int main(){
	int a,b ,c;
printf("informe os valores\n");
scanf("%d %d %d", &a, &b, &c);

if (a <= b && a <= c){
	printf("%d\n", a);
}
	else if (b <= c){
		printf("%d\n", b);
		
	}
	else{
		printf("%d\n", c);
	}
	return 0;
}