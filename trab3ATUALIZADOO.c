#include <stdio.h>
void barra(){
    int v, w, r=0, i=0, divisao=3000, soma=0;

    printf("Digite o numero de divisoes a serem feitas:\n");
    scanf("%d", &v);

    printf("Digite os numeros pelos quais voce quer dividir a barra:\n");

    for(i=0; i<v; i++){
         scanf("%d", &w);
         r=w-1;
         divisao = divisao / w;
         soma = soma + r;
         w=0;
         
    }
    printf("A quantidade de pedacos restantes sera de %d\n", soma);
}



void kibonacci(){
    int k, n, i=0, temp, y, x=0, a=1;
    
    printf("Digite o valor de k:\n");
    scanf("%d", &k);

    printf("Digite o valor de n:\n");
    scanf("%d", &n);

    for(i=0; i<k; i++){
        printf("%d  ", a);
        x++;
    }
    printf("%d  ", x);
    y = x + (a*(k-1));
    printf("%d  ", y);

    for(i=0; i<=n-k-2; i++){
        temp = y; 
        y = y + x + a;
        a = x;
        x = temp;
        printf ("%d  ", y);
    }
    
           
        
       
       
    }


void primok(){
    int primo, w, j, i=1, total=0, x;
    printf("Digite um numero primo\n");
    scanf("%d", &w);

    if(w<=250 && w>0){
       for(i = 1; i <= w; i++){
           if(i == 0 || i == 1) {
		    primo = 0;
	    }else{
		    primo = 1; 
		    for(j = 2; j < i; j++){ 
			    if (i % j == 0){
			        primo = 0; 
			}
		}
    }
	if(primo == 1){
        x=i + 2;
		printf("(%d, %d); ", i, x);
		}
	}

    }else{
        printf("O numero eh muito grande ou negativo:\n");
    }
}

    
int main (){
    int x;

    printf(" 1 - Problema das barras\n 2 - Problema de Kibonacci\n 3 - Problema dos numeros primos:\n");
    printf("Digite um numero de 1 a 3 para escolher a problematica\n");
    scanf("%d", &x);

    if(x>=4 || x<=0){
        printf("Numero invalido\n");
    }

    switch(x){
        case 1: barra();
        break;

        case 2: kibonacci();
        break;

        case 3: primok();
        break;
    }
    

    return 0;

}