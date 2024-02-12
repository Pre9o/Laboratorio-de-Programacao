#include <stdio.h>

int maisProximo(int *vetor, int busca){
    int maior_proximo, menor_proximo, indice_maior, indice_menor;

    maior_proximo = vetor[0];
    menor_proximo = vetor[0];
    indice_maior = vetor[0];
    indice_menor = vetor[0];

    for(int i = 0; i < 10; i++){
        if(vetor[i] < menor_proximo && busca < vetor[i]){
            menor_proximo = vetor[i];
            indice_menor = i;
        }
        if(vetor[i] > maior_proximo && busca > vetor[i]){
            maior_proximo = vetor[i];
            indice_maior = i;
        }
    }

    maior_proximo = busca-maior_proximo;
    menor_proximo = menor_proximo-busca;

    if(maior_proximo >= menor_proximo){
        return indice_maior;
    }
    else{
        return indice_menor;
    }
}

int main(){
    int vetor[10], busca, lugar;

    printf("digite vetor\n");
    for(int i = 0; i < 10; i++){
        scanf("%d", &vetor[i]);
    }

    printf("digite busca\n");
    scanf("%d", &busca);

    lugar = maisProximo(vetor, busca);

    printf("%d\n", vetor[lugar]);

    return 0;
}