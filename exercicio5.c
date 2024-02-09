#include <stdio.h>
int main(){
    int A, B; 

    printf("\nDigite um numero:");
    scanf("%d", &A);

    printf("\nDigite outro numero:");
    scanf("%d", &B);

    printf("\nOs numeros sao: %d e %d", A, B);

    A=A+B;
    B=A-B;
    A=A-B;

    printf("\nOs numeros trocados sao: %d e %d", A, B);

    return 0;
}