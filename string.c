#include <stdio.h>
#include <string.h>

int funcao(char *palavra){
    int lenpalavra, i, j, cont=0;

    lenpalavra=strlen(palavra);
    j=lenpalavra-1;

    for(i=0; i<=(lenpalavra/2)-1; i++){
        if(palavra[i]==palavra[j]){
                    cont++;
        }
        j--;
        
    }

    if(cont==lenpalavra/2){
        return 1;
    }
    
    return 0;
    
}



int main(){
    int son;
    char palavra[1024];

    printf("Digite a palavra:\n");
    scanf("%s", &palavra);

    son=funcao(palavra);

    if(son==1){
        printf("A palavra eh palindroma!\n");
    }
    else{
        printf("A palavra nao eh palindroma!\n");
    }

    return 0;
}