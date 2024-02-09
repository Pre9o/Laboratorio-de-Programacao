#include <stdio.h>
int main(){
    float X, H, C, SB, AA, I, G;
    int SL;

    printf("Digite o valor do salario minimo de um trabalhador:\n");
    scanf("%f", &X);

    printf("Digite as horas trabalhadas do trabalhador no mes:\n");
    scanf("%f", &H);
    
    char Y; 
    printf("Digite o turno de trabalho do trabalhador:\n");
    scanf(" %c", &Y);
    
    char Z;
    printf("Digite a categoria do trabalhador:\n");
    scanf(" %c", &Z);

    switch(Y){
        case 'M': C=0.01 * X;
                  SB=(int)C * H;
             break;
        case 'T': C=0.015 * X;
                  SB=(int)C * H;
             break;
        case 'N': C= 0.012 * X;
                  SB=(int)C * H;
             break;
    }
    
    switch(Z){
        case 'O': if(X>=300){
            I=(int)0.05 * X;

            }else{
                I=(int)0.03 * X;
            }      
              break;
        case 'G': if(X>=400){
            I=(int)0.06 * X;

            }else{
                I=(int)0.04 * X;
            } 
              break;

    }
    if(Y='N' &&  H > 80){
        G = 50;

    }else{
       G = 30;
    }
    if(Z='O' && C<=25){
        AA=(int)0,33 * SB;

    }else{
        AA=(int)0,5 * SB;
    }

    if(Z='O'){
        SL=(((SB - I) + G) + AA);

    }else{
        SL=((SB - I) +G);
    }
    if(SL<350){
        printf("mal remunerado\n");

    }if(SL>=350 && SL<=600){
        printf("normal\n");

    }if(SL>600){
        printf("bem remunerado\n");
    }

return 0;
}
    
     
    
    
    
          
        
    



    

