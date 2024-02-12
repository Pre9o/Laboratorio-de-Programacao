#include <stdio.h>

int main(){
    int X;

    printf("\nDigite um numero para identificar se ele eh positivo, negativo ou nulo:");
    scanf("%d", &X);

    if (X > 0)
       printf("\nO numero eh positivo");

    if (X == 0)
       printf("\nO numero eh nulo");

    if (X < 0)
       printf("\nO numero eh negativo");

    return 0;      
}