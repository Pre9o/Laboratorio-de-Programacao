#include <stdio.h>
int triangulo(int n){
    int i=1, resto;

    while(i<=n){
        resto = n / (i+2);
        resto = resto / (i+1);
        resto = resto / (i);
        
        if(resto == 1){
            printf("Esse numero eh triangular\n");
            return 0;
        }
        i++;
    }
    printf("Esse numero nao eh triangular\n");
}

int main(){
    int n, t;

    printf("Digite um numero inteiro e positivo:\n");
    scanf("%d", &n);

    while(n>0){
        triangulo(n);

        printf("Digite um numero inteiro e positivo:\n");
        scanf("%d", &n);

    }

    return 0;
}