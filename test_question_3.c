#include <stdio.h> 
#include <stdlib.h>

int copia(char *src, char *dest){
    if( *src == '\0'){
        *dest = '\0';
        return 0;
    }
    *dest = *src;
    return 1 + copia(++src, ++dest);
    
}

int main(){
    char *src = malloc(10 * sizeof(char));
    char *dest = malloc(10 * sizeof(char));

    printf("Digite a string: ");
    scanf("%s", src);

    int tam = copia(src, dest);

    printf("%s\n", dest);
    printf("%d\n", tam);

    free(src);
    free(dest);

    return 0;
}