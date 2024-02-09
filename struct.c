#include <stdio.h>

struct produto{
        char descricao[1024];
        float preco;
    };

int main(){
    int i;
    struct produto shampoo[10];    

    for(i=0; i<10; i++){
        printf("Digite as coisas\n");
        scanf("%s", shampoo[i].descricao);
        printf("Digite as coisas 2\n");
        scanf("%f", &shampoo[i].preco);
    }

    for(i=9; i>=0; i--){
        printf("O %d shampoo tinha preco de R$%.2f e descricao de ", i+1, shampoo[i].preco);
        puts(shampoo[i].descricao);
        printf("\n");
    }

    return 0;
}