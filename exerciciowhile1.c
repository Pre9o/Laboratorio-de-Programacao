#include <stdio.h>
int main(){
    int n, cont=0, i, resto, conta=0;

    printf("Digite um numero\n");
    scanf("%d", &n);

    while(n>0){
        for(i=1; i<=n; i++){
            resto = n % i;
            if(resto == 0){
                cont++;
            }
        }
        if(cont == 2){
            conta++;
        }
        cont=0;
        
        printf("Digite um numero\n");
        scanf("%d", &n);
    }
    
    printf("A quantidade de numeros primos eh %d", conta);

    return 0;
}