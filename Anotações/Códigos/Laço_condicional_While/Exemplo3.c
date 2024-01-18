#include <stdio.h>
//progama que ler o salário de 3 funcionários de uma empresa e informe o valor 
//gasto por ela com o pagamento dos salários.
int main(){
	
float salario;
float soma = 0;
int cont = 1;
while (cont <= 3){
	printf("informe o salario do funcionario\n");
	scanf("%f", &salario);
	soma = soma + salario;
	cont = cont + 1;
}

printf("%2f", soma);
}