#include <stdio.h>

int main(){

  printf("Type the year above 1582: \n");
  int y;
  scanf("%d", &y);

  int g = (y % 19) + 1;
  int c = (y / 100) +1;
  float x = ((3 * c) / 4) - 12;
  float z = (((8 * c) + 5) / 25) - 5;
  int e =  (int)(11 * g + 20  + z  - x) % 30;

  if((e == 25 && g > 11) || e == 24){
    e++;
  }

  int n = 44 - e;

  if(n < 21){
    n += 30;
  }

  int d = (5 * y) / 4 - (x + 10);

  n += 7 - ((d + n) % 7);

  if(n > 31){
    printf("Pascoa: %02d de abril de %d\n", (n - 31), y);
  }else{
    printf("Pascoa: %02d de março de %d\n", n, y);
  }

  return 0;
}
