#include <stdio.h>

int main()
{
int numero, centena, dezena, resto;


printf("digite um numero inteiro: ");

scanf("%d", &numero);

centena=numero/100;

resto=numero%100;

dezena=resto/10;

printf("aqui esta a dezena: %d", dezena);

return 0;

}