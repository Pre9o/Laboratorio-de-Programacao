/*Rafael Carneiro Pregardier*/

/*Program made to convert the speed from meters per second to kilometers per hour.*/

#include <stdio.h> 

int main(){
    int m; 
    float k;

    printf("Enter the speed in meters per second:\n");

    scanf("%d", &m);
    k=m*3.6;

    printf("The speed in kilometers per hour is: %.2f km/h", k);

    return 0;
}