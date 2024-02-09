#include <stdio.h>

struct aluno{
    float media;
    int idade;
};

int main(){
    struct aluno turma[10];
    float media = 0;
    int maioridade, menoridade;

    for(int i = 0; i < 10; i++){
        printf("Digite a media do aluno %d:\n", i + 1);
        scanf("%f", &turma[i].media);
        printf("Digite a idade do aluno %d:\n", i + 1);
        scanf("%d", &turma[i].idade);
    }

    maioridade = turma[0].idade;
    menoridade = turma[0].idade;

    for(int i = 0; i < 10; i++){
        media=media + turma[i].media;

        if(turma[i].idade > maioridade){
            maioridade = turma[i].idade;
        }

        if(turma[i].idade < menoridade){
            menoridade = turma[i].idade;
        }
    }

    media = media / 10;

    printf("A maior idade eh %d e a menor idade eh %d e a media das notas eh %2.f\n", maioridade, menoridade, media);

    return 0;

}