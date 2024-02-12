#include <stdio.h>

int main(){
    int X, Y, Z;

    printf("Digite aqui a idade: ");

    scanf("%d", &X);
    Z = 365;
    Y = X * Z;

    printf("Aqui esta os dias: %d:", Y);

    return 0;
}
