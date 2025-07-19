#include <stdio.h>
int main(void){
  int k, n, w, ans;
  scanf("%d %d %d", &k, &n, &w);
  ans = (w*(w+1)/2) * k;
  ans = n > ans ? 0 : ans - n; 
  printf("%d", (int)ans);
  puts("");
  return 0;
}
