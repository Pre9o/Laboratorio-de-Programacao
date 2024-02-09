#include <stdio.h>
int main(){
    float UMTOTAL, CINCOTOTAL, DEZTOTAL, VINTECINCOTOTAL, CINQUENTATOTAL, UMREALTOTAL, MOEDASUM, MOEDASCINCO, MOEDASDEZ, MOEDASVINTECINCO, MOEDASCINQUENTA, MOEDASUMREAL, TOTAL;

    printf("\nPrograma feito para calcular o valor economizado em moedas.");

    printf("\nDigite o numero de moedas de 1 centavo:");
    scanf("%f", &MOEDASUM);
    UMTOTAL=MOEDASUM*0.01;

    printf("\nDigite o numero de moedas de 5 centavos:");
    scanf("%f", &MOEDASCINCO);
    CINCOTOTAL=MOEDASCINCO*0.05;

    printf("\nDigite o numero de moedas de 10 centavos:");
    scanf("%f", &MOEDASDEZ);
    DEZTOTAL=MOEDASDEZ*0.10;

    printf("\nDigite o numero de moedas de 25 centavos:");
    scanf("%f", &MOEDASVINTECINCO);
    VINTECINCOTOTAL=MOEDASVINTECINCO*0.25;

    printf("\nDigite o numero de moedas de 50 centavos:");
    scanf("%f", &MOEDASCINQUENTA);
    CINQUENTATOTAL=MOEDASCINQUENTA*0.50;

    printf("\nDigite o numero de moedas de 1 real:");
    scanf("%f", &MOEDASUMREAL);
    UMREALTOTAL=MOEDASUMREAL*1.00;

    TOTAL=UMTOTAL+CINCOTOTAL+DEZTOTAL+VINTECINCOTOTAL+CINQUENTATOTAL+UMREALTOTAL;

    printf("\nO total economizado foi de %.2f reais", TOTAL);

    return 0;

    

}