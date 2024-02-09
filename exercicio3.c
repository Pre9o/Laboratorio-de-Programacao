#include <stdio.h>
int main(){
int BASE, ALTURA;
float AREA;

printf("\nPrograma feito para expressar a area de um triangulo");
printf("\nDigite o valor da base do triangulo:");
scanf("%d", &BASE);
printf("\nAgora digite o valor da altura do triangulo:");
scanf("%d", &ALTURA);


AREA=(BASE*(float)ALTURA)/2;

printf("\nA area do triangulo e: %.2f", AREA);

return 0;








}