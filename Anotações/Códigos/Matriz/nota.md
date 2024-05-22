## Matriz:
- Explicação: É uma estrutura de dados que armazena elementos em linhas e colunas.

- Sintaxe:
- tipo nome_matriz[linhas][colunas];

- Acesso aos elementos:
- Exemplo:
``` c
     int elemento = matriz[1][2]; // Acessando o elemento da  linha e da coluna
```
Inicialização: // Caso você queira já definir os valores da matriz.
- Sintaxe:
``` c
 tipo nome_matriz[linhas][colunas] = {{valor1, valor2, ... ,valor n},
  {valor3, valor4, ... ,valor n}};
```
- Exemplo:
``` c
  int matriz[2][2] = {{1, 2}, {3, 4}}; 
```
- Loops para percorrer as linhas e colunas da matriz e realizar operações nos elementos.
- Exemplo:

``` c
int i,j;
  for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
        printf("%d ", matriz[i][j]);
        }
        printf("\n");
         }
```

``` c
#include <stdio.h>

int main(void){
	int matriz[3][3];
	int i,j;
  int num =1;
	
  for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
       matriz[i][j] = num++;
        }
         }	

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
```