#include <stdio.h>

void IPVA(){
    int X;
    printf("Digite o numero correspondente ao mes atual:");
    scanf("%d", &X);

    int Y;
    printf("Digite os quatro ultimos numeros da placa do carro:");
    scanf("%d", &Y);

    Y = (int)Y % 10;
    
    switch(Y){
        case 1: printf("O IPVA vence em Janeiro");
                break;
        case 2: printf("O IPVA vence em Fevereiro");
                break;
        case 3: printf("O IPVA vence em Marco");
                break;
        case 4: printf("O IPVA vence em Abril");
                break;
        case 5: printf("O IPVA vence em Maio");
                break;
        case 6: printf("O IPVA vence em Junho");
                break;
        case 7: printf("O IPVA vence em Julho");
                break;
        case 8: printf("O IPVA vence em Agosto");
                break;
        case 9: printf("O IPVA vence em Setembro");
                break;
        case 0: printf("O IPVA vence em Outubro");
                break;
    }
}

int main(){
    IPVA();

    return 0;
}
  
