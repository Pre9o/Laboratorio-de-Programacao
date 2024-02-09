#include <stdio.h>
void barra(){
    int v, w, r=0, i=0, divisao=3000, soma=0;

    printf("digite o numero de divisoes a serem feitas:\n");
    scanf("%d", &v);

    printf("digite os numeros pelos quais voce quer dividir a barra:\n");

    for(i=0; i<v; i++){
         scanf("%d", &w);
         r=w-1;
         divisao = divisao / w;
         soma = soma + r;
         w=0;
         
    }



    printf("a quantidade de pedacos restantes sera de %d\n", soma);
}



void kibonacci(){
    int k, n, i=0, x=0, soma=0;
    
    printf("digite o valor de k:\n");
    scanf("%d", &k);

    printf("digite o valor de n:\n");
    scanf("%d", &n);

    for(i=0; i<k; i++){
        printf("1  ");
        x++;
    }
    printf("%d  ", x);

    for(i=0; i<n-4; i++){
    soma=x-1;
    x=x+soma;
    soma=0;
    printf("%d  ", x);
    }
}

void primok(){
    int x, w, y, i=1, total=0;
    printf("digite um numero primo\n");
    scanf("%d", &w);

     for(i=1;i<=w;i++){
        if(w % i==0){
           total++;
           if(total==2){
               x=w+2;
               printf("(%d, %d); ", w, x);
               x=0;
               total==0; 
           }
        }
    } 
}


int main (){
    primok();

    return 0;

}