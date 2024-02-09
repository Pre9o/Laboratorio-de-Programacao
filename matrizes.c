#include <stdio.h>
int main(){
    int m[3][3], cont=0, i, l, c, j;

    printf("Digite o numero de linhas da matriz:\n");
    scanf("%d", &l);

    printf("Digite o numero de colunas da matriz:\n");
    scanf("%d", &c);

    printf("Digite os numeros da matriz:\n");

    for(i=0; i<l; i++){
        for(j=0; j<c; j++){
            scanf("%d", &m[i][j]);
        }
    }

    for(i=0; i<c; i++){
        if(m[i][i]==1){
            cont++;
        }
    }

    if(cont==l){
        printf("A matriz eh identidade");

    }else{
        printf("A matriz nao eh identidade");
    
    }

    return 0;
}