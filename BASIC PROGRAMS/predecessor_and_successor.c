#include <stdio.h>

int main(){
    int X, Y, SUS, ANT; 

    printf("\nColoque os numeros aqui: \n");

    scanf("%d %d", &X, &Y);

    SUS = ++X ;

    ANT = --Y ;

    printf("\nO sucessor e o antecessor sao: %d e %d", SUS, ANT);

    return 0;
}