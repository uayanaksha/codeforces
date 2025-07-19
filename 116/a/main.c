#include <stdio.h>
int main(){
  int n, ai, bi;
  int maxCtr = 0, prev = 0;
  scanf("%d", &n);
  for(int i = 0; i < n; i++){
    scanf("%d %d", &ai, &bi);
    prev -= ai;
    prev += bi;
    if(prev > maxCtr) maxCtr = prev;
  }
  printf("%d", maxCtr);
  puts("");
  return 0;
}
