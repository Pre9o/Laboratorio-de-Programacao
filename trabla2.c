#include <stdio.h>
void primos(int a, int b){
    int resto, temp1, temp2;

    temp1 = a;
    temp2 = b;

    do{
        resto = temp1 % temp2;
        if(resto != 0){
            temp1 = temp2 ;
            temp2 = resto ;
        }
    } while (resto != 0);

    if(temp2 == 1){
        printf("Os numeros %d e %d sao primos entre si.\n", a, b);
    }
}    

int main(){
    int x, y, z;

    printf("Digite 3 numeros naturais:\n");
    scanf("%d%d%d", &x, &y, &z);

    if(x>y){
        x=x+y;
        y=x-y;
        x=x-y;
    }
    
    if(x>z){
        x=x+z;
        z=x-z;
        x=x-z;
    }
    
    if(y>z){
        y=y+z;
        z=y-z;
        y=y-z;
    }
    primos(x, y);
    primos(x, z);
    primos(y, z);

    return 0;
}