#include <stdio.h>
int main(void){
  int initPos = 0, destPos, steps;
  scanf("%d", &destPos);
  steps = (destPos / 5 ) + (destPos % 5 ? 1 : 0);
  printf("%d", steps);
  puts("");
  return 0;
}
