#include <stdio.h>

int main(){
   float n1, n2, p1, p2;
   float media;

   printf("\ncoloque os pesos aqui:\n");
   scanf("%f %f", &n1, &n2);

   printf("\ncoloque as notas aqui:\n");
   scanf("%f %f", &p1, &p2);

   media = (n1*p1+n2*p2)/(p1+p2);

   printf("\naqui esta a media: %.2f", media);

   return 0;
}

