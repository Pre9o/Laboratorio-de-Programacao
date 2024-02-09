#include <stdio.h>
#include <math.h>

int main(){
    double X;

    printf("\nDigite um numero:");
    scanf("%lf", &X);

    if (X > 0)
        printf("\nO inverso do numero eh: 1/%.0lf", X);
    
    else 
        printf("\nO valor absoluto do numero eh: %.2lf", fabs(X));

    return 0;    
}