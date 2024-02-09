#include <stdio.h>

int main(){
    unsigned char prego;

    printf("Digite um valor: \n");
    scanf("%d", &prego);

    unsigned char mask1 = prego<<7;
    mask1 = mask1>>7;

    if(mask1 & 1){
        printf("Valor impar\n");
    }
    else{
        printf("Valor par\n");
    }

    return 0;
}
