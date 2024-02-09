#include <stdio.h>
void collatz(int n){
    int i=0, cont=0;

    if(n<=1){
        printf("Numero invalido.\n");

    }else{
        while(n!=1){
            if(n % 2 == 0){
                n = n / 2;

            }else{
                n = (3 * n) + 1;
            
            }
            cont++;
        }
        printf("A regra foi aplicada %d vezes.\n", cont);
    }

}

int main(){
    int n;

    printf("Digite um numero maior que 1:\n");
    scanf("%d", &n);

    collatz(n);

    return 0;
}