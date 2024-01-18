#include <stdio.h>

int main() {
   float a , b , c,  m ;
   printf("informe o a\n");
   scanf("%f" , &a);
     printf("informe o b\n");
   scanf("%f" , &b);
     printf("informe o c\n");
   scanf("%f" , &c);
   m = (a + b + c )/ 3;
  
  
   if (m > 7.0){
       printf("\n aprovado \n ");
   }
   else{
       if (m < 7.0 ){
           
       }
         printf("\n nao aprovado \n ");
   }
 return 0;  
}
/*media simples*/