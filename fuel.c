#include <stdio.h>

int main(){
    int PRECOMBUSTIVEL = 6.99, INICIO, FIM, LITROS, KMTOTAL;
    float MEDIA, LUCRO, VALORTOTAL;

    printf("\nDigite o numero de km no inicio do dia:");
    scanf("%d", &INICIO);

    printf("\nDigite o numero de km no fim do dia:");
    scanf("%d", &FIM);

    printf("\nDigite quanto combustivel foi gasto:");
    scanf("%d", &LITROS);

    printf("\nDigite o valor total recebido dos passageiros:");
    scanf("%f", &VALORTOTAL);

    KMTOTAL = FIM - INICIO;
    MEDIA = KMTOTAL / LITROS;

    LUCRO = VALORTOTAL - (LITROS * PRECOMBUSTIVEL);

    printf("\nA media de consumo em km/l foi %.2f", MEDIA);
    printf("\nO lucro do dia foi %.2f", LUCRO);

    return 0;
}
