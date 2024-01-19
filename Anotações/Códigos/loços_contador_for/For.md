## O comando FOR
. 
. Sintaxe:
- for(<Inicialização>;<Condição>;<Incremento_ou_Decremento>){
    <bloco_de_comando>
}
. Exemplo:
- #include <stdio.h>

int main(){
  int cont;
  for(cont = 1; cont <= 10; cont = cont + 1){
    printf("%d\n", cont);
  }
 printf("progama finalizado\n"); 
}