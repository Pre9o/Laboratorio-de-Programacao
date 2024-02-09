#include <stdio.h>

void inverter(unsigned int *n){
    int x, y, z;

    z=*n%10;
    y=((*n/10)%10);
    x=*n/10;
    x=x/10;

    z=z*100;
    y=y*10;

    *n=0;

    *n=x+y+z;

}

int main(){
    unsigned int n;

    printf("Digite algo:\n");
    scanf("%d", &n);

    inverter(&n);

    printf("%d\n", n);

    return 0;

}