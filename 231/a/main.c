#include <stdio.h>
int main(void){
  int n, ctr = 0;
  scanf("%d", &n);
  while(n--){
    int x,y,z;
    scanf("%d %d %d", &x, &y, &z);
    if(x+y+z > 1) ctr++;
  }
  printf("%d", ctr);
  puts("");
  return 0;
}
