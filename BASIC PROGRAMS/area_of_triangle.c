/*Rafael Carneiro Pregardier*/

/*Program maded to express the area of ​​a triangle*/

#include <stdio.h>

int main(){
    int b, h;
    float a;

    printf("Enter the value of the triangle base:\n");
    scanf("%d", &b);

    printf("Now enter the value of the height of the triangle:\n");
    scanf("%d", &h);

    a=(float)(b*h)/2;

    printf("The area of triangle is: %.2f\n", a);

    return 0;
}