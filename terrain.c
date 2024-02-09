#include <stdio.h>

int main(){
    int LTERRENO, CTERRENO, LCASA, CCASA, AREAT, AREAC, AREAL, PORCENTAGEM;

    printf("\nDigite a largura do terreno:");
    scanf("%d", &LTERRENO);

    printf("\nDigite o comprimento do terreno:");
    scanf("%d", &CTERRENO);

    printf("\nDigite a largura da casa:");
    scanf("%d", &LCASA);

    printf("\nDigite o comprimento da casa:");
    scanf("%d", &CCASA);

    AREAT = LTERRENO * CTERRENO;
    AREAC = LCASA * CCASA;
    AREAL = AREAT - AREAC;

    PORCENTAGEM = 100 * AREAL / AREAT;

    printf("\nA area livre em m2 eh: %d e a porcentagem que ela ocupa eh: %d", AREAL, PORCENTAGEM);

    return 0;
}