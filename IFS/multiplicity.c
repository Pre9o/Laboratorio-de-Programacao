#include <stdio.h>

int main(){
    int A, B; 

    printf("\nPrograma feito para calcular a multiciplicidade de dois numeros.");
    printf("\nDigite o primeiro numero:");
    scanf("%d", &A);

    printf("\nDigite o segundo numero:");
    scanf("%d", &B);

    if ((A % B) == 0)
        printf("Os numeros sao multiplos");
    else 
        printf("Os numeros nao sao multiplos");

    return 0;
}