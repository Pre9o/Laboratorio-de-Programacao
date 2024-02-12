#include <stdio.h>

int main(){
    int X;
    printf("Digite um numero:\n");
    scanf("%d", &X);

    if (((X % 3) == 0) && ((X % 7) == 0)){
        printf("O numero eh multiplo de 3 e de 7");
    }
    else{
        printf("O numero nao eh multiplo de 3 e de 7");
    }

    return 0;
}