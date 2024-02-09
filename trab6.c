#include <stdio.h>
#include <string.h>

void Levenshtein(char strinicial[64], char strbusca[64]){
    int index=0, leninicial, lenbusca, corretos=0, cont_subs=0, index2=0, contador_troca=0, inseridos=0, substituidos=0, removidos=0, posicao=0;
    char str_auxiliar_inicial[64], str_auxiliar_busca[64], trocados[64], temp_troca[64], strcopia[64];
    float similaridade, operacoes;

    leninicial=strlen(strinicial)-1;
    lenbusca=strlen(strbusca)-1;

    strcpy(str_auxiliar_inicial, strinicial);
    strcpy(str_auxiliar_busca, strbusca);

    for(index=0; index<lenbusca; index++){
        cont_subs=0;
        contador_troca=0;

        if(strbusca[index]==strinicial[index+inseridos]){
            corretos++;
            printf("Posicao correta = %d, Caractere = %c, corretos = %d\n", index+posicao, str_auxiliar_inicial[index], corretos);
        }

        else{
            for(index2=index+inseridos; index2<leninicial; index2++){
                if(strbusca[index]==strinicial[index2]){
                    cont_subs++;
                }
                else{
                    if(cont_subs==0){
                        temp_troca[contador_troca]=strinicial[index2];
                        contador_troca++;
                    }
                }

                strcpy(trocados, temp_troca);
            }
            
            if(cont_subs!=0){
                inseridos+=contador_troca;                

                for(index2=0; index2<lenbusca-index; index2++){
                    strcopia[index2]=str_auxiliar_busca[index+index2];
                }

                for(index2=0; index2<contador_troca; index2++){
                    str_auxiliar_busca[index+index2]=trocados[index2];
                    printf(">>Adicao de %c\n", trocados[index2]);
                    posicao++;
                }

                for(index2=0; index2<lenbusca-index; index2++){
                    str_auxiliar_busca[index+contador_troca+index2]=strcopia[index2];
                }
                
                corretos++;
                printf("Posicao correta = %d, Caractere = %c, corretos = %d\n", index+posicao, str_auxiliar_inicial[index+inseridos], corretos); 
            }

            else{
                if(index+inseridos<leninicial){
                    substituidos++;
                    printf("Substituicao de %c por %c\n", strbusca[index], strinicial[index+inseridos]);
                    str_auxiliar_busca[index+inseridos]=strinicial[index+inseridos];
                }

                else{
                    removidos++;
                    printf(">>Remocao de %c\n", strbusca[index]);
                    str_auxiliar_busca[index+inseridos]=strinicial[index+inseridos];
                    posicao++;
                }
            }
        }
    }

    str_auxiliar_busca[index+posicao]='\0';
    printf("\n");

    printf("%s\n", str_auxiliar_busca);
    printf("\n");
    
    printf("-->> %d corretos\n-->> %d adicao\n-->> %d remocao\n-->> %d substituicao\n", corretos, inseridos, removidos, substituidos);
    printf("\n");
    
    operacoes=inseridos+substituidos+removidos;
    similaridade=100*(1-(operacoes/(operacoes+corretos)));
    printf("SIMILARIDADE = %.3f%%\n", similaridade);
}
        
int main(){
    int leninicial, lenbusca;
    char strinicial[64], strbusca[64];
    
    printf("Digite uma palavra inicial: ");
    fgets(strinicial, 64, stdin);
    
    printf("Digite uma palavra para buscar: ");
    fgets(strbusca, 64, stdin);

    Levenshtein(strinicial, strbusca);
    
    return 0;
}