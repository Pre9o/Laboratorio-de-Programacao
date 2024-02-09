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
    
    for(j=0; j<l-1; j++){
        for(i=0; i<c-1; i++){
            if(m[i][j]!=m[i][j+1]){
                printf("As colunas nao sao iguais!\n");
                return 0;
            }
        }
    }

    printf("As colunas sao iguais!\n");

    return 0;
}