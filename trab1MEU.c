#include <stdio.h>
int main(){
  int Y;
  
  printf("\nDigite o ano que deseja descobrir o dia que eh comemorada a Pascoa:");
  scanf("%d", &Y);

  int G = (Y % 19) + 1;
  int C = (Y / 100) +1;
  float X = ((3 * C) / 4 ) - 12;
  float Z = (((8 * C) + 5) / 25 ) - 5;
  int E = (int)(11 * G + 20 + Z - X) % 30;
  
  if((E == 25 && G > 11) || E == 24) {
    E++;
  }

  int N = 44 - E;

  if(N < 21){
    N += 30;
  }

  int D = (5 * Y) / 4 - (X + 10);

  N += 7 - ((D + N) % 7) ;

  if(N > 31){
    N = N - 31;
    printf("Pascoa: %d de Abril de %d\n", N, Y);
  }
  else{
    printf("Pascoa: %d de Março de %d\n", N, Y);
  }

  return 0;
}