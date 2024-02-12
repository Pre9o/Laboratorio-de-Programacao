#include <stdio.h>

int main(){
   float PROD, DESC;

   printf("\nEscreva o preco: \n");
   scanf("%f", &PROD);

   DESC = PROD * 0.9;
   printf("\nO preco e o desconto sao: %.2f e %.2f", PROD, DESC);

   return 0;
}