#include <stdio.h>

void fatorial(int n){
    int j = 1, h = 1, cont = 0, r, y, p, z, b;

    for(int i = 1; i <= n; i++){
        j = j * i;
    }
    
    p = n;
    
    for(int i = 1; i <= n; i++){
        p = p * n;
    }
    int i = 1;
    if(j >= p){
        printf("A fatorial de %d e maior que %d ao quadrado.\n", n, n);

    }else{
        while(h <= p){
            i++;
            h = h * i;
            cont++;
        }
        r = cont - n;
            
        printf("O menor numero de a para que (N+a)!>=N^N eh %d", r);
    }
}

int main(){
    int n;

    printf("Digite um numero positivo:\n");
    scanf("%d", &n);

    if(n<1){
        printf("Numero invalido\n");

    }else{
        fatorial(n);

    }

    return 0;
}