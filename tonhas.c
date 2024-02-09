#include <math.h>
#include <stdio.h>

int main ()
{
    int n1, n2, n3, resto1, resto2, resto3, i, c1=0, c2=0, c3=0;
    printf ("Digite tres numeros\n");
    scanf ("%d%d%d",&n1, &n2, &n3);
    
    
    for (i = 1; i <= n1; i++)
    {
        resto1 = n1%i;
        if (resto1 == 0)
        {
            c1 = c1+1;
        }
            
    }


    for (i = 1; i <= n2; i++)
    {
            resto2 = n2%i;
            if (resto2 == 0){
            c2 = c2+1;
        }
    }


    for (i = 1; i <= n3; i++)
    {
        resto3 = n3%i;
        if (resto3 == 0){
        c3 = c3+1;
        }
    }


    if (c1 == 2 & c2 == 2 & c3 == 2)
    {
        printf ("Os tres numeros %d, %d e %d sao primos", n1, n2, n3);
    }    
    
    
    else{
        if (c1 == 2 & c2 == 2)
        {
        printf ("Os numeros %d e %d sao primos", n1, n2);
        }
        if (c1 == 2 & c3 == 2)
        {
        printf ("Os numeros %d e %d sao primos", n1, n3);
        }
        if (c2 == 2 & c3 == 2)
        {
        printf ("Os numeros %d e %d sao primos", n2, n3);
        }
        if (c1 != 2 & c2 != 2 & c3 != 2)
        {
        printf ("Nenhum numero eh primo");
        }
    }
    
    return 0;
}