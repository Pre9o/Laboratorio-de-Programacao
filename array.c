#include <stdio.h>
int main(){
    int vet[15], cont = 0, x, id;

    printf("Digite 15 numeros:\n");

    for(int i = 0; i <= 14; i++){
        scanf("%d", &vet[i]);
    }

    printf("Digite o numero que voce quer achar no programa:\n");
    scanf("%d", &x);

    for(int i = 0; i <= 14; i++){
        if(vet[i] == x){
            id = i;
            printf("O numero pesquisado esta no programa na posicao: %d\n", id);
            cont++;
    }
    }
    
    if(cont <= 0){
        printf("O numero pesquisado nao esta no programa.\n");
    }

    return 0;
}