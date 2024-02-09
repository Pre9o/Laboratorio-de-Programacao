/*********************************************************************
// Programa criado utilizando a "Canvas", criada pelo Professor Cesar Tadeu Pozzer, sobre a API OpenGl.
//
// O programa exibe uma matriz 5x5 de números gerados de forma aleatória e oferece ao usuário 4 opções:
// 1- Ao aperta a tecla "A", destacar a linha e a coluna com maior soma (em caso de igualdade, mais de uma será destacada);
// 2- Ao apertar a tecla "B", exibir a soma das linhas e a soma das colunas da matriz;
// 3- Ao apertar a tecla "C", destacar a parte abaixo ou acima da diagonal principal que possua a maior soma (em caso de igualdade, as duas serão destacadas);
// 4- Ao apertar a tecla "D", gerar uma nova matriz.
// *********************************************************************/

#include <GL/glut.h>
#include <GL/freeglut_ext.h> //callback da wheel do mouse.
#include <stdio.h>
#include <stdlib.h>
#include "gl_canvas2d.h"
#include "auxiliar.h"

///variaveis globais
int mudacor = 0;
int matrizrand[5][5];//vetor usado para pegar os números aleatórios
int somalin[5], somacol[5];//vetores para armazenar a soma das linhas e colunas;
char opcao = 0; //caracter usado para selecionar as opções do menu

int screenWidth =800, screenHeight = 600; //largura e altura inicial da tela. Alteram com o redimensionamento de tela.
int mouseX, mouseY; //variaveis globais do mouse para poder exibir dentro da render().


///funçao que gera os numeros aleatorios pra matriz
int geramatriz()
{
    for (int i=0; i<5; i++){
        for (int j=0; j<5; j++){
            matrizrand[i][j] = rand()%10;
        }
    }
}

///função que renderiza na tela
void render()
{
    //coordenadas dos retangulos do titulo
    int xtitulo = (screenWidth/2)-320;
    int ytitulo = (screenHeight-140);
    //coordenadas do menu
    int xmenu = (screenWidth/2)+50;
    int ymenu = 60;
    //coordenadas do quadrado da matriz
    int xmatriz = (screenWidth/2)-235;
    int ymatriz = 125;

    ///fundo
    CV::clear(0, 0.54, 0.44);


    ///blocos de borda (efeito visual)
    CV::color(0, 0.21 , 0.25);

    CV::rectFill(xtitulo, ytitulo-10, xtitulo+640+10, ytitulo+80);
    CV::rectFill(xmenu, ymenu-10, xmenu+270+10, ymenu+330);


    ///blocos (titulo, menu e matriz)
    CV::color(0, 0.35, 0.35);

    CV::rectFill(xtitulo, ytitulo, xtitulo+640, ytitulo+80);
    CV::rectFill(xmenu, ymenu, xmenu+270 , ymenu+330);
    CV::rectFill(xmatriz, ymatriz, xmatriz+200, ymatriz+200);


    ///linhas da matriz
    CV::color(0, 0.21, 0.25);
        //verticais
    CV::line(xmatriz+40, ymatriz, xmatriz+40, ymatriz+200);
    CV::line(xmatriz+80, ymatriz, xmatriz+80, ymatriz+200);
    CV::line(xmatriz+120, ymatriz, xmatriz+120, ymatriz+200);
    CV::line(xmatriz+160, ymatriz, xmatriz+160, ymatriz+200);
        //horizontais
    CV::line(xmatriz, ymatriz+40, xmatriz+200, ymatriz+40);
    CV::line(xmatriz, ymatriz+80, xmatriz+200, ymatriz+80);
    CV::line(xmatriz, ymatriz+120, xmatriz+200, ymatriz+120);
    CV::line(xmatriz, ymatriz+160, xmatriz+200, ymatriz+160);


    ///botoes
    CV::color(0, 0.54, 0.44);

        //retangulos das descrições dos botoes
    CV::rectFill(screenWidth/2+110, 313, screenWidth/2+310, 364);
    CV::rectFill(screenWidth/2+110, 237, screenWidth/2+310, 288);
    CV::rectFill(screenWidth/2+110, 161, screenWidth/2+310, 212);
    CV::rectFill(screenWidth/2+110, 85, screenWidth/2+310, 136);

        //círculos
    CV::circleFill(screenWidth/2+80, 338, 20, 30);
    CV::circleFill(screenWidth/2+80, 262, 20, 30);
    CV::circleFill(screenWidth/2+80, 186, 20, 30);
    CV::circleFill(screenWidth/2+80, 110, 20, 30);

        //mudar a cor dos círculos se as teclas forem pressionadas
    switch (mudacor){
        case 1:
            CV::color(0, 0.8, 0);//verde
            CV::circleFill(screenWidth/2+80, 338, 20, 30);
            break;
        case 2:
            CV::color(0, 0.8, 0);
            CV::circleFill(screenWidth/2+80, 262, 20, 30);
            break;
        case 3:
            CV::color(0, 0.8, 0);
            CV::circleFill(screenWidth/2+80, 186, 20, 30);
            break;
        case 4:
            CV::color(0, 0.8, 0);
            CV::circleFill(screenWidth/2+80, 110, 20, 30);
            break;
    }


    ///textos
    CV::color(1,1,1);

        //titulo
    CV::text(screenWidth/2 - 300, screenHeight-105,"TRABALHO 3 DE LOGICA E ALGORITMO - JORDANO XAVIER DOS SANTOS");

        //descriçoes
    CV::text(screenWidth/2+120, 341,"Linha e Coluna de");
    CV::text(screenWidth/2+120, 326,"maior soma.");
    CV::text(screenWidth/2+120, 265,"Soma das linhas e");
    CV::text(screenWidth/2+120, 250,"colunas.");
    CV::text(screenWidth/2+120, 189,"Maior soma acima ou");
    CV::text(screenWidth/2+120, 174,"abaixo da diagonal.");
    CV::text(screenWidth/2+120, 106,"Gerar nova matriz.");

        //botoes
    CV::text(screenWidth/2+76, 333, "A");
    CV::text(screenWidth/2+76, 257, "B");
    CV::text(screenWidth/2+76, 181, "C");
    CV::text(screenWidth/2+76, 105, "D");


    ///numeros matriz
    CV::color(1,1,1);
    char str[1];
    int matriz[5][5];

    for (int lin=0; lin<5; lin++){
        for (int col=0; col<5; col++){
            matriz[lin][col] = matrizrand[lin][col];
            sprintf(str, "%d", matriz[lin][col]);
            CV::text(screenWidth/2-220+col*40, 300-lin*40, str);
        }
    }


    ///selecionar as opções do menu
        for (int i=0; i<5; i++){ //atribuindo o valor 0 aos vetores para as somas darem certo
            somalin[i]=0;
            somacol[i]=0;
        }

        for(int i=0; i<5; i++){ //soma das linhas
            for(int j=0; j<5; j++){
                somalin[i] = somalin[i] + matriz[i][j];
            }
        }

        for(int i=0; i<5; i++){ //soma das colunas
            for(int j=0; j<5; j++){
                somacol[j] = somacol[j] + matriz[i][j];
            }
        }


        switch(opcao){
        case 'a':///destacar linha e coluna de maior soma
            int bubblex[5], aux1, bubbley[5], aux2;

            //linhas
            for (int i=0; i<5; i++){ //passar as somas das linhas para uma copia
                    bubblex[i] = somalin[i];
                }
            for (int i=0; i<5; i++){ //bubblesort na copia para ver a maior soma das linhas
                for (int j=0; j<5-1; j++){
                    if (bubblex[j]>bubblex[j+1]){
                        aux1 = bubblex[j];
                        bubblex[j]=bubblex[j+1];
                        bubblex[j+1]=aux1;
                    }
                }
            }
            for (int i=0; i<5; i++){
                    if(somalin[i]==bubblex[4]){ //verificar qual a linha da maior soma
                            for(int j=0; j<5; j++){
                                CV::color(0, 0.8, 0);
                                sprintf(str, "%d", matriz[i][j]);
                                CV::text(screenWidth/2-220+j*40, 300-i*40, str);//printar de outra cor
                            }
                    }
            }

            //colunas
            for (int i=0; i<5; i++){ //passar as somas das colunas para uma copia
                    bubbley[i] = somacol[i];
                }
            for (int i=0; i<5; i++){ //bubblesort na copia para ver a maior soma das colunas
                for (int j=0; j<5-1; j++){
                    if (bubbley[j]>bubbley[j+1]){
                        aux2 = bubbley[j];
                        bubbley[j]=bubbley[j+1];
                        bubbley[j+1]=aux2;
                    }
                }
            }
            for (int i=0; i<5; i++){
                    if(somacol[i]==bubbley[4]){ //verificar qual a coluna da maior soma
                            for(int j=0; j<5; j++){
                                CV::color(0, 0.8, 0);
                                sprintf(str, "%d", matriz[j][i]);
                                CV::text(screenWidth/2-220+i*40, 300-j*40, str);//printar de outra cor
                            }
                    }
            }
            break;

        case 'b':///exibir soma das linhas e colunas
            char strlin[1], strcol[1];

            for (int i=0; i<5; i++){
                sprintf(strlin, "%d", somalin[i]);
                CV::text(screenWidth/2-25, 300-40*i, strlin);
            }
            for (int i=0; i<5; i++){
                sprintf(strcol, "%d", somacol[i]);
                CV::text(screenWidth/2-225+i*40, 105, strcol);
            }
            break;

        case 'c':///realçar a parte abaixo ou acima da diagonal principal que tenha a maior soma
            int somacima=0, somabaixo=0;

            for (int i=0; i<5; i++){  //soma da parte abaixo e acima da diagonal
                for (int j=0; j<5; j++){
                    if (j>i){
                        somacima = somacima + matriz[i][j];
                    }
                    if (j<i){
                        somabaixo = somabaixo + matriz[i][j];
                    }
                }
            }

            if(somacima>somabaixo){ // se a soma da parte de cima for maior
                for (int i=0; i<5; i++){
                    for (int j=0; j<5; j++){
                        if(j>i){
                                CV::color(0,0.8,0);
                                sprintf(str, "%d", matriz[i][j]);
                                CV::text(screenWidth/2-220+j*40, 300-i*40, str);
                        }
                    }
                }
            }

            if(somabaixo>somacima){ // se a soma da parte de baixo for maior
                for (int i=0; i<5; i++){
                    for (int j=0; j<5; j++){
                        if(j<i){
                                CV::color(0,0.8,0);
                                sprintf(str, "%d", matriz[i][j]);
                                CV::text(screenWidth/2-220+j*40, 300-i*40, str);
                        }
                    }
                }
            }

            if(somabaixo==somacima){ //se as duas somas forem iguais
                for (int i=0; i<5; i++){
                    for (int j=0; j<5; j++){
                        if(j !=i ){
                                CV::color(0,0.8,0);
                                sprintf(str, "%d", matriz[i][j]);
                                CV::text(screenWidth/2-220+j*40, 300-i*40, str);
                        }
                    }
                }
            }

            break;

    }

}


///funcao chamada toda vez que uma tecla for pressionada
void keyboard(int key)
{
   printf("\nTecla: %d" , key);

   switch(key)
   {
        case 27: //esc - finaliza programa
            exit(0);
            break;

        case 97: //a
            mudacor=1;//muda a cor do botão no menu
            opcao = 'a';//chama a opcao a na função render
            break;
        case 65: //A
            mudacor=1;
            opcao = 'a';
            break;

        case 98: //b
            mudacor=2;
            opcao = 'b';
            break;
        case 66: //B
            mudacor=2;
            opcao = 'b';
            break;

        case 99: //c
            mudacor=3;
            opcao = 'c';
            break;
        case 67: //C
            mudacor=3;
            opcao = 'c';
            break;

        case 100: //d
            mudacor=4;
            geramatriz();
            opcao=0;
            break;
        case 68: //D
            mudacor=4;
            geramatriz();
            opcao=0;
            break;
   }
}

///funcao chamada toda vez que uma tecla for liberada
void keyboardUp(int key)
{
   switch(key)
   {
        case 97: //a
            mudacor=0;//volta a cor original do botão ao soltar a tecla
            break;
        case 65: //A
            mudacor=0;
            break;

        case 98: //b
            mudacor=0;
            break;
        case 66: //B
            mudacor=0;
            break;

        case 99: //c
            mudacor=0;
            break;
        case 67: //C
            mudacor=0;
            break;

        case 100: //d
            mudacor=0;
            break;
        case 68: //D
            mudacor=0;
            break;
   }
}


//funcao para tratamento de mouse: cliques, movimentos e arrastos
void mouse(int button, int state, int wheel, int direction, int x, int y)
{
   mouseX = x; //guarda as coordenadas do mouse para exibir dentro da render()
   mouseY = y;
}

int main(void)
{
    CV::init(&screenWidth, &screenHeight, "Trab3");

    //função para gerar os números aleatórios para a matriz
    geramatriz();

    CV::run();
}
