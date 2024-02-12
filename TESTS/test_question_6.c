#include <stdio.h>

char valor(unsigned char v){
    unsigned char mask1 = v>>7;
    unsigned char mask2 = v<<7;

    mask2 = mask2 >> 7;

    if(mask1 == mask2){
        return 1;
    }
    else{
        return 0;
    }


}

int main(){
    int sim;
    char v;

    printf("Digite um valor: \n");
    scanf("%d", &v);

    sim = valor(v);

    if(sim){
        printf("Valor valido\n");
    }
    else{
        printf("Valor invalido\n");
    }

    return 0;
}