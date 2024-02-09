#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int matriz[5][5];

void Geradormatriz(){
    int i, j;

    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            matriz[i][j]=rand()%10;
        }
    }
}

int PintarSoma(){
    int somalinha=0, somacoluna=0, linhams=matriz[0][0], colunams=matriz[0][0], i, j, lm, lc;


    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            somalinha=somalinha + matriz[i][j];
        }

        if(somalinha>linhams){
            linhams=somalinha;
            lm=i;
        }

        somalinha=0;
    }


    return lm;

}

int main(){
    srand(time(NULL));
    int lm, i, j;


    Geradormatriz();

    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            printf("%d   ", matriz[i][j]);
        }
        printf("\n");
    }

    lm=PintarSoma();

        for(j=0; j<5; j++){
            printf("%d   ", matriz[lm][j]);
        }
        
    }
