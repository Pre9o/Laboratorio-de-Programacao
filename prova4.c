//3.	Implemente em C na função main() a declaração de um vetor de 1000 inteiros, a sua leitura via teclado, a leitura de um outro valor de busca e a chamada da função maisProximo(). Esta função deve retornar o valor do vetor que seja mais próximo do valor de busca fornecido pelo usuário. Deve ser usado um único laço de repetição na função maisProximo ().//

#include <stdio.h>

int maisProximo(int *vetor, int busca){
    int maior_proximo, menor_proximo, indice_maior, indice_menor;
    
    maior_proximo=vetor[0];
    menor_proximo=vetor[0];
    indice_maior=vetor[0];
    indice_menor=vetor[0];
    
    for(int i=0; i<1000; i++){
        if(vetor[i]<menor_proximo && busca<vetor[i]){
            menor_proximo=vetor[i];
            indice_menor=i;
        }
        if(vetor[i]>maior_proximo && busca>vetor[i]){
            maior_proximo=vetor[i];
            indice_maior=i;
        }
    }
    
    maior_proximo=busca-maior_proximo;
}

int main(){
    int vetor[1000], busca, lugar;
    printf("digite vetor\n");
    for(int i=0; i<1000; i++){
        scanf("%d", &vetor[i]);
    }
    printf("digite busca\n");
    scanf("%d", &busca);
    lugar=maisProximo(vetor, busca);
    printf("%d\n", vetor[lugar]);
    return 0;
}