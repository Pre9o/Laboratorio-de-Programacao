#include <stdio.h>

int main(){
    int X, Y, SUS, ANT; 

    printf("\ncoloque os numeros aqui: \n");

    scanf("%d %d", &X, &Y);

    SUS = ++X ;

    ANT = --Y ;

    printf("\no sucessor e o antecessor sao: %d e %d", SUS, ANT);

    return 0;
}