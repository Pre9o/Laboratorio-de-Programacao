#include <stdio.h>

int main(){
    int A = 5, B = 2, C; 
    float D;

    C=A/B;
    printf("\n%d", C);

    D=A/(int)B;

    printf("\n%f", D);

    return 0;
}