#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int dados(){
    int x;
    x = rand() % 6 + 1;
    return x;
}

int verificacao(int *dado, int x){
    int i, cont, cont2, cont3, cont4, cont5, cont6, pontosparciais=0;

    cont=0;
    cont2=0;
    cont3=0;
    cont4=0;
    cont5=0;
    cont6=0;

    for(i=0; i<5-x; i++){
        if(dado[i]==1){
            cont++;
        }
        if(dado[i]==2){
            cont2++;
        }
        if(dado[i]==3){
            cont3++;
        }
        if(dado[i]==4){
            cont4++;
        }
        if(dado[i]==5){
            cont5++;
        }
        if(dado[i]==6){
            cont6++;
        }
    }

    if(cont2==1 || cont2==2){
        pontosparciais=pontosparciais + 0;
    }

    if(cont3==1 || cont3==2){
        pontosparciais=pontosparciais + 0;
    }
    
    if(cont4==1 || cont4==2){
        pontosparciais=pontosparciais + 0;
    }

    if(cont6==1 || cont6==2){
        pontosparciais=pontosparciais + 0;
    }

    if(cont>0 || cont2>2 || cont3>2 || cont4>2 || cont5>0 || cont6>2){
        return 1;
    }

    if(pontosparciais==0){
        return 0;
    }

}

int pontosrobo(int *dado, int x, int retorno){
    int i, cont=0, cont2=0, cont3=0, cont4=0, cont5=0, cont6=0, cont7=0, pontosparciais=0;
            for(i=0; i<=4-x; i++){

                if(dado[i]==1){
                    cont++;
                }
                if(dado[i]==2){
                    cont2++;
                }
                if(dado[i]==3){
                    cont3++;
                }
                if(dado[i]==4){
                    cont4++;
                }
                if(dado[i]==5){
                    cont5++;
                }
                if(dado[i]==6){
                    cont6++;
                }

            }

            if(cont==1 && cont2==1 && cont3==1 && cont4==1 && cont5==1){
                if(retorno==2){
                    return 500;
                }
                if(retorno==1){
                    return 5;
                }
            }

            if(cont2==1 && cont3==1 && cont4==1 && cont5==1 && cont6==1){
                if(retorno==2){
                    return 500;
                }
                if(retorno==1){
                    return 5;
                }
            }

            if(cont==1){
                pontosparciais=pontosparciais + 100;
                cont7=cont7 + 1;
            }

            if(cont==2){
                pontosparciais=pontosparciais + 200;
                cont7=cont7 + 2;
            }

            if(cont==3){
                pontosparciais=pontosparciais + 1000;
                cont7=cont7 + 3;
            }

            if(cont==4){
                pontosparciais=pontosparciais + 2000;
                cont7=cont7 + 4;
            }

            if(cont==5){
                pontosparciais=pontosparciais + 5000;
                if(retorno==1){
                    return 5;
                }
            }

            if(cont2==3){
                pontosparciais=pontosparciais + 200;
                cont7=cont7 + 3;
            }

            if(cont2==4){
                pontosparciais=pontosparciais + 400;
                cont7=cont7 + 4;
            }

            if(cont2==5){
                pontosparciais=pontosparciais + 800;
                if(retorno==1){
                    return 5;
                }
            }

            if(cont3==3){
                pontosparciais=pontosparciais + 300;
                cont7=cont7 + 3;
            }

            if(cont3==4){
                pontosparciais=pontosparciais + 600;
                cont7=cont7 + 4;
            }

            if(cont3==5){
                pontosparciais=pontosparciais + 1200;
                if(retorno==1){
                    return 5;
                }
            }

            if(cont4==3){
                pontosparciais=pontosparciais + 400;
                cont7=cont7 + 3;
            }

            if(cont4==4){
                pontosparciais=pontosparciais + 800;
                cont7=cont7 + 4;
            }

            if(cont==5){
                pontosparciais=pontosparciais + 1600;
                if(retorno==1){
                    return 5;
                }
            }

            if(cont5==1){
                pontosparciais=pontosparciais + 50;
                cont7=cont7 + 1;
            }

            if(cont5==2){
                pontosparciais=pontosparciais + 100;
                cont7=cont7 + 2;
            }

            if(cont5==3){
                pontosparciais=pontosparciais + 500;
                cont7=cont7 + 3;
            }

            if(cont5==4){
                pontosparciais=pontosparciais + 1000;
                cont7=cont7 + 4;
            }

            if(cont5==5){
                pontosparciais=pontosparciais + 2000;
                if(retorno==1){
                    return 5;
                }
            }

            if(cont6==3){
                pontosparciais=pontosparciais + 600;
                cont7=cont7 + 3;
            }

            if(cont6==4){
                pontosparciais=pontosparciais + 1200;
                cont7=cont7 + 4;
            }

            if(cont6==5){
                pontosparciais=pontosparciais + 2400;
                if(retorno==1){
                    return 5;
                }
            }
            
            if(retorno==1){
                return cont7;
            }

            if(retorno==2){
                return pontosparciais;
            }
}

int pontos(int jogador, int modo, int pjogador, int probo, int buraco){
    int i, dado[4], cont=0, cont2=0, cont3=0, cont4=0, cont5=0, cont6=0, cont7=0, x=0, y, pontosparciais=0, z, temp=0, v, retorno=1, robo, temp2=0, temp3;
        
        do{
            cont=0;
            cont2=0;
            cont3=0;
            cont4=0;
            cont5=0;
            cont6=0;

            if(jogador==1){
                x=temp+x;
                if(x==5){
                    x=0;
                }
                temp=x;
            }

            for(i=0; i<=4-x; i++){
                dado[i]=dados();
                printf("     |%d|", dado[i]);
            }

            v=verificacao(dado, x);
            if(v==0){
                printf("\n");
                printf("%d\n", v);
                printf("PERDEU OS PONTOS DA RODADA!\n");
                return 0;
            }

            printf("\n"); 

            if(jogador==1){
                do{
                    printf("|ESCOLHA QUANTOS DADOS VOCE QUER SEPARAR|\n");
                    scanf("%d", &x);
                    if(x<=0 || x>5){
                        printf("NUMERO INVALIDO!\nDIGITE NOVAMENTE!\n");
                    }
                }while(x<=0 || x>5);

                    printf("DIGITE O(S) NUMERO(S) CORRESPONDENTE(S) AO(S) DADO(S) QUE QUER SEPARAR(DA ESQUERDA PARA DIREITA)\n");
                    printf("      ^       ^       ^       ^      ^\n");
                    printf("     |1       2       3       4      5|\n");

                    
                
            }

            if(jogador==2){
                robo=temp2 + pontosrobo(dado, x, retorno+1);
                temp2=robo;
                temp3=pontosrobo(dado, x, retorno);
                cont7=temp3;
                x=cont7+x;

                if(x==5){
                    x=0;
                }

                printf("O COMPUTADOR SEPAROU %d DADOS!\n", cont7);
                printf("OS PONTOS DO COMPUTADOR SAO %d\n", robo);
                printf("____________________________________\n");
                printf("\n");

                if(modo==1){
                    if(buraco==0){
                        if(robo>=600){
                            return robo;
                        }
                    }
                    
                    if(robo==5000){
                        return 5000-probo;
                    }
                    if(probo+robo>=5000){
                        return robo;
                    }

                    if(probo+robo>=pjogador){
                        if(probo+robo>=5000){
                            return robo;
                        }
                    
                        if(buraco==1){
                            if(robo>=250){
                                return robo;
                            }
                        }   
                    }  
                }
                

                if(modo==2){
                    if(buraco==0){
                        if(robo>=600){
                            return robo;
                        }
                    }

                    if(robo==5000){
                        return 5000-probo;
                    }

                    if(probo+robo>=5000){
                        return robo;
                    }
                    
                    if(probo+robo>=pjogador){
                        if(probo+robo>=5000){
                                return robo;
                        }

                        if(buraco==1){
                            if(x>3){
                                return robo;
                            }
                            
                            if(robo>=150){
                                return robo;
                            }
                        }
                    }
                    
                }

            }
                
            if(jogador==1){
                for(i=0; i<x; i++){
                    do{
                        scanf("%d", &y);
                        if(y<=0 || y>5){
                            printf("DIGITE O(S) NUMERO(S) CORRESPONDENTE(S) AO(S) DADO(S) QUE QUER SEPARAR(DA ESQUERDA PARA DIREITA)\n");
                            printf("      ^       ^       ^       ^      ^\n");
                            printf("     |1       2       3       4      5|\n");
                        }                        
                    }while(y<=0 || y>5);

                    y=y-1;

                    if(dado[y]==1){
                        cont++;
                    }
                    if(dado[y]==2){
                        cont2++;
                    }
                    if(dado[y]==3){
                        cont3++;
                    }
                    if(dado[y]==4){
                        cont4++;
                    }
                    if(dado[y]==5){
                        cont5++;
                    }
                    if(dado[y]==6){
                        cont6++;
                    }

                }

                if(cont==1 && cont2==1 && cont3==1 && cont4==1 && cont5==1){
                    pontosparciais=pontosparciais + 500;
                }

                if(cont2==1 && cont3==1 && cont4==1 && cont5==1 && cont6==1){
                    pontosparciais=pontosparciais + 500;
                }

                if(cont==1){
                    pontosparciais=pontosparciais + 100;
                    
                }

                if(cont==2){
                    pontosparciais=pontosparciais + 200;
                }

                if(cont==3){
                    pontosparciais=pontosparciais + 1000;
                }

                if(cont==4){
                    pontosparciais=pontosparciais + 2000;
                }

                if(cont==5){
                    return 5000-pjogador;
                }

                if(cont2==3){
                    pontosparciais=pontosparciais + 200;
                }

                if(cont2==4){
                    pontosparciais=pontosparciais + 400;
                }

                if(cont2==5){
                    pontosparciais=pontosparciais + 800;
                }

                if(cont3==3){
                    pontosparciais=pontosparciais + 300;
                }

                if(cont3==4){
                    pontosparciais=pontosparciais + 600;
                }

                if(cont3==5){
                    pontosparciais=pontosparciais + 1200;
                }

                if(cont4==3){
                    pontosparciais=pontosparciais + 400;
                }

                if(cont4==4){
                    pontosparciais=pontosparciais + 800;
                }

                if(cont==5){
                    pontosparciais=pontosparciais + 1600;
                }

                if(cont5==1){
                    pontosparciais=pontosparciais + 50;
                }

                if(cont5==2){
                    pontosparciais=pontosparciais + 100;
                }

                if(cont5==3){
                    pontosparciais=pontosparciais + 500;
                }

                if(cont5==4){
                    pontosparciais=pontosparciais + 1000;
                }

                if(cont5==5){
                    pontosparciais=pontosparciais + 2000;
                }

                if(cont6==3){
                    pontosparciais=pontosparciais + 600;
                }

                if(cont6==4){
                    pontosparciais=pontosparciais + 1200;
                }

                if(cont6==5){
                    pontosparciais=pontosparciais + 2400;
                }

                if(pjogador+pontosparciais>=5000){
                    return pontosparciais;
                }

                if(cont==1 && cont2==1 && cont3==1 && cont4==1 && cont5==1){
                    pontosparciais=pontosparciais - 150;
                }

                if(cont2==1 && cont3==1 && cont4==1 && cont5==1 && cont6==1){
                    pontosparciais=pontosparciais - 50;
                }

            
                printf("%d\n", pontosparciais);
                printf("VOCE QUER GUARDAR OS PONTOS OU CONTINUAR?\n");
                printf("APERTE 0 PARA GUARDAR E QUALQUER OUTRO NUMERO PARA CONTINUAR\n");
                scanf("%d", &z);

                if(z==0){
                    return pontosparciais;
                }
            }

        }while(z!=0);

        
}

int jogador(int modo, int pjogador, int probo, int buraco){
    int pontuacao, x=0;
    pontuacao = pontos(1, x, pjogador, probo, 1);
    return pontuacao;

}

int robo(int modo, int pjogador, int probo, int buraco){
    int pontuacao;
    pontuacao = pontos(2, modo, pjogador, probo, buraco);
    return pontuacao;

}

int normal(){
    int pontuacaojogador=0, pontuacaorobo=0, modo=1, cont=0, cont2=0, pontos, pontos2, buraco=0;
    
    do{
        pontos=jogador(modo, pontuacaojogador, pontuacaorobo, buraco);
        pontuacaojogador=pontuacaojogador + pontos;
        printf("SUA PONTUACAO PARCIAL E %d\n", pontuacaojogador);
        printf("A PONTUACAO PARCIAL DO COMPUTADOR E %d\n", pontuacaorobo);

        if(pontuacaojogador==5000){
            printf("VOCE GANHOU O JOGO!!!\n");
            return 1;
        }


        pontos2=robo(modo, pontuacaojogador, pontuacaorobo, buraco);
        pontuacaorobo=pontuacaorobo + pontos2;
        printf("SUA PONTUACAO PARCIAL E %d\n", pontuacaojogador);

        printf("A PONTUACAO PARCIAL DO COMPUTADOR E %d\n", pontuacaorobo);
        if(pontuacaorobo==5000){
            printf("O COMPUTADOR GANHOU O JOGO!!!\n");
            return 0;
        }

        if(pontuacaojogador>=600){
            cont++;
            buraco=1;
        }

        if(cont==1){
            printf("VOCE SAIU DO BURACO!\n");
        }

        if(pontuacaorobo>=600){
            cont2++;
            buraco=1;
        }

        if(cont2==1){
            printf("O COMPUTADOR SAIU DO BURACO!\n");
        }

        if(cont==0){
            pontuacaojogador=0;
            printf("VOCE ESTA NO BURACO!\n");
        }

        if(cont2==0){
            pontuacaorobo=0;
            printf("O COMPUTADOR ESTA NO BURACO!\n");
        }
        
        if(pontuacaojogador>5000){
            pontuacaojogador=pontuacaojogador-pontos;
            printf("SEUS PONTOS PASSARAM DE 5000! VOCE VOLTOU PARA A PONTUACAO DE %d\n", pontuacaojogador);
        }

        if(pontuacaorobo>5000){
            pontuacaorobo=pontuacaorobo-pontos2;
            printf("O COMPUTADOR PASSOU DA PONTUACAO DE 5000! ELE VOLTOU PARA A PONTUACAO DE %d\n", pontuacaorobo);
        }
        
    }while(pontuacaojogador!=5000 || pontuacaorobo!=5000);
        
        
}

int avancado(){
    int pontuacaojogador=0, pontuacaorobo=0, modo=2, cont=0, cont2=0, pontos, pontos2, buraco=0;
    
    do{
        pontos=jogador(modo, pontuacaojogador, pontuacaorobo, buraco);
        pontuacaojogador=pontuacaojogador + pontos;
        printf("SUA PONTUACAO PARCIAL E %d\n", pontuacaojogador);
        printf("A PONTUACAO PARCIAL DO COMPUTADOR E %d\n", pontuacaorobo);

        if(pontuacaojogador==5000){
            printf("VOCE GANHOU O JOGO!!!\n");
            return 1;
        }

        pontos2=robo(modo, pontuacaojogador, pontuacaorobo, buraco);
        pontuacaorobo=pontuacaorobo + pontos2;
        printf("SUA PONTUACAO PARCIAL E %d\n", pontuacaojogador);
        printf("A PONTUACAO PARCIAL DO COMPUTADOR E %d\n", pontuacaorobo);

        if(pontuacaorobo==5000){
            printf("O COMPUTADOR GANHOU O JOGO!!!\n");
            return 0;
        }

        if(pontuacaojogador>=600){
            cont++;
            buraco=1;
        }

        if(cont==1){
            printf("VOCE SAIU DO BURACO!\n");
        }

        if(pontuacaorobo>=600){
            cont2++;
            buraco=1;
        }

        if(cont2==1){
            printf("O COMPUTADOR SAIU DO BURACO!\n");
        }

        if(cont==0){
            pontuacaojogador=0;
            printf("VOCE ESTA NO BURACO!\n");
        }

        if(cont2==0){
            pontuacaorobo=0;
            printf("O COMPUTADOR ESTA NO BURACO!\n");
        }
        
        if(pontuacaojogador>5000){
            pontuacaojogador=pontuacaojogador-pontos;
            printf("SEUS PONTOS PASSARAM DE 5000! VOCE VOLTOU PARA A PONTUACAO DE %d\n", pontuacaojogador);
        }

        if(pontuacaorobo>5000){
            pontuacaorobo=pontuacaorobo-pontos2;
            printf("O COMPUTADOR PASSOU DA PONTUACAO DE 5000! ELE VOLTOU PARA A PONTUACAO DE %d\n", pontuacaorobo);
        }
        
    }while(pontuacaojogador!=5000 || pontuacaorobo!=5000);

        
}

int main(){
    srand(time(NULL));
    int w, x, y, z;

    printf("\t\t|Jogo 5000|\n");
    printf("\t   Voce quer ler as regras?\n");
    printf("   |1-PARA LER||QUALQUER NUMERO PARA PULAR|\n");
    scanf("%d", &w);

    if(w==1){
        printf("          COPIE O LINK ABAIXO NO SEU NAVEGADOR:\n");
        printf("https://www.playmonster.com/wp-content/uploads/2018/06/Farkle-Rules.pdf\n");
    }

    do{
        printf("\t   Escolha o nivel de dificuldade:\n");
        printf("        |0-PARA SAIR||1-BASICO||2-AVANCADO|\n");
        scanf("%d", &x);

        switch(x){
            case 0: return 0;
                break;
                
            case 1: y=normal();
                break;
            
            case 2: z=avancado();
                break;
        }
    }while(x!=0 || x!=1 || x!=2);

    if(y==0){
        printf("O COMPUTADOR GANHOU O JOGO!!!\n");
    }
    if(y==1){
        printf("VOCE GANHOU O JOGO!!!\n");
    }

    if(z==0){
        printf("O COMPUTADOR GANHOU O JOGO!!!\n");
    }
    if(z==1){
        printf("VOCE GANHOU O JOGO!!!\n");
    }

    //Rafael Carneiro Pregardier//

    return 0;
}
