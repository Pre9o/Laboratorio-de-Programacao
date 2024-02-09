#include <stdio.h>
 
int main(){
    int matriz[10][20], i, j, trocados_i[2], trocados_j[2], cont=0;

    for(i=0; i<10; i++){
        for(j=0; j<20; j++){
            matriz[i][j]=i;
        }
    }

    matriz[4][7]=7;
    matriz[7][4]=4;

    for(i=0; i<10; i++){
        for(j=0; j<20; j++){
            if(matriz[i][j]!=i){
                trocados_i[cont]=i;
                trocados_j[cont]=j;
                cont++;
            }
            if(cont==2){
                break;
            }
        }
    }

    matriz[trocados_i[0]][trocados_j[0]]=trocados_i[0];
    matriz[trocados_i[1]][trocados_j[1]]=trocados_i[1];


    printf("%d   %d\n", matriz[4][7], matriz[7][4]);
}