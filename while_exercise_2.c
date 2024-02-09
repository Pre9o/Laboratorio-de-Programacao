#include <stdio.h>


int somatoria(int m, int n){
    int soma;

    soma = m;

    for(int i = 1; i < n; i++){
        m = m + 1;
        soma = soma + m;
    }
    return soma;
}

int main(){
    int m, n, s;

    printf("Digite uma dupla de numeros:\n");
    scanf("%d%d", &m, &n);

    while(m > 0 && n > 0){
        s = somatoria(m, n);
        printf("A soma dos %d inteiros consecutivos a partir de %d eh igual a %d\n", n, m, s);

        printf("Digite uma dupla de numeros:\n");
        scanf("%d%d", &m, &n);
    }

    return 0;
}
