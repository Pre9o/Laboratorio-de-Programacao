#include <stdio.h>

int somatoria(int n){
    if(n == 0){
        return 0;
    }
    return n + somatoria(n - 1);

}

int main(){
    int n, s;

    printf("Escreva um numero:\n");
    scanf("%d", &n);
    s = somatoria(n);

    printf("%d\n", s);

    return 0;
}