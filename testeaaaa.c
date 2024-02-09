#include <stdio.h>
void fatorial(int n){
    int i, k, a=0, m, z;
    long double h, p, j;
    
    p=n;
    i=n;
    z=n;

    for(j=1; n>1; n=n-1){
        j = (long double) j * n;
    }

    for(k=1; k<i; k++){
        p = (long double) p * i;
    }
    
    if(j>p){
        printf("A fatorial de %d e maior que %d^%d.\n", i, i, i);

    }else{
        do{
            m=z;
            for(h=1; m>1; m=m-1){
                h = (long double) h * m;
            }
            if(h<=p){
                z++;
            }   
        }while(h<=p);
        a=z-i;      
        printf("O menor numero de a para que (N+a)!>=N^N eh %d\n", a);
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
