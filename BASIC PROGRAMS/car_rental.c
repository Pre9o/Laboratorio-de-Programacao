#include <stdio.h>

int main(){
   float CARROS, VALOR;

   printf("Digite a quantidade de carros que a locadora possui:\n");
   scanf("%f", &CARROS);

   printf("Digite o valor da diaria cobrada pela locadora:\n");
   scanf("%f", &VALOR);

   float FATURAMENTOANUAL = (0,33 * CARROS) * 365;
   float MULTAS = (0,10 * VALOR) * 1/10 * (0,33 * CARROS);
   float CARROSFINAL = ((0,05 * CARROS) + (0,125 * CARROS)) - CARROS;

   printf("O faturamento anual da locadora eh %.0f\n O valor arrecadado com as multas eh de %.0f\n A quantidade de carros que a locadora tera no fim do ano eh %.0f\n", FATURAMENTOANUAL, MULTAS, CARROSFINAL);

   return 0;
}