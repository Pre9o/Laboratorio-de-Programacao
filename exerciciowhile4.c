#include <stdio.h>
int main(){
    int chico=150, juca=110, cont=0;

    while(chico>=juca){
        chico+=2;
        juca+=3;
        cont++;
    }

    printf("Ira demorar %d anos para Juca ser mais alto que Chico\n", cont);

    return 0;
}