## Estrutura de decisão multípla 
# Swich(escolha) 
- Executar um bloco de código entre várias alternativas.
. Sintaxe:
```` c
- swith(<var>){
    case<v1>:
    <comandos>
    breack;
     case<v2>:
    <comandos>
    breack;
     case<vN>:
    <comandos>
    breack;
    default:
    <finalizar>
    breack;
}
```` 
Ou 

- A sintaxe é a seguinte:
```` c
    ```c
    switch (expressão) {
        case valor1:
            // declarações
            breack;
        case valor2:
            // declarações
            breack;
        ...
        default:
            // declarações padrão
    }
````
# Case(caso) 
- vários blocos de código que podem ser executados.
# Break(pare) 
- Finalizar o camando.
- terminar imediatamente.
# Default(outrocaso) 
. Definir um bloco de código que será executado se nenhum dos case
corresponder ao valor da expressão no `switch`.
# Continue(continuar)
. É usado para pular a interação atual do loop e continuar com a próxima interação.
- Exemplo no For:
````c 
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
````

## Sobre o break 
- Também com os comandos de loop for , while e do...while.
```` c
#include <stdio.h>
int main() {
  int i;
  for (i = 0; i < 10; i++) {
    if (i == 5) {
      break;
    }
    printf("%d ", i);
  }
  return 0;
}
````
