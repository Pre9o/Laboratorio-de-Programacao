#include <stdio.h>
#include <math.h>


int main(){
    int A, B, C, X1, X2, X3, DELTA;

    printf("Digite o primeiro termo de uma equacao do segundo grau\n");
    scanf("%d", &A);

    printf("Digite o segundo termo de uma equacao do segundo grau\n");
    scanf("%d", &B);

    printf("Digite o terceiro termo de uma equacao do segundo grau\n");
    scanf("%d", &C);

    if(A == 0){
        printf("Isso eh uma equacao do primeiro grau\n");
        X3 = - (C/B);
        printf("O resultado dessa equacao eh: %d", X3);
    }
    else{
        DELTA = (int)sqrt(pow(B, 2) - 4 * A * C);
        if(DELTA < 0){
           printf("A equacao nao tem raizes\n");
        }
        else{
           X1 = (- B + DELTA) / (2 * A);
           X2 = (- B - DELTA) / (2 * A);
           printf("As raizes da equacao sao x1=%d e x2=%d", X1, X2);
        }
    }

    return 0;
}