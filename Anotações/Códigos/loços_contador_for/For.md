## O comando FOR
- O for é uma estrutura de controle de fluxo que permite a execução repetida da parte código.
- Sintaxe:
```` c
for(<Inicialização>;<Condição>;<Incremento_ou_Decremento>){
    <bloco_de_comando>
}
````
. Exemplo:
```` c
#include <stdio.h>

int main(){
  int cont;
  for(cont = 1; cont <= 10; cont = cont + 1){
    printf("%d\n", cont);
  }
 printf("progama finalizado\n"); 
}
````
# Não declara varíavel no for!!!