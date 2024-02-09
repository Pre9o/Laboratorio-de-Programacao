#include <stdio.h>
int main()
{
int VALOR, HORAS, BRUTO;
float LIQUIDO, INSS, IR, CS;

printf("\nPrograma feito para calcular o salario de um trabalhador.");

printf("\nEscreva o valor da hora de trabalho do trabalhador:");
scanf("%d", &VALOR);

printf("\nAgora digite o numero de horas trabalhadas:");
scanf("%d", &HORAS);

BRUTO=VALOR*HORAS;
IR=BRUTO*0.11;
INSS=BRUTO*0.08;
CS=BRUTO*0.05;

LIQUIDO=BRUTO-IR-INSS-CS;

printf("\nO valor do salario bruto eh: %d", BRUTO);
printf("\nO valor do salario liquido eh %.2f", LIQUIDO);
printf("\nO valor do IR eh: %.2f", IR);
printf("\nO valor do INSS eh: %.2f", INSS);
printf("\nO valor da contribuicao sindical eh: %.2f", CS);

return 0;





}