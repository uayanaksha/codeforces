#include <stdio.h>
int main(void){
  int n, p, q, ctr = 0;
  scanf("%d", &n);
  for(int i=0; i < n; i++){
    scanf("%d %d", &p, &q);
    if(q-p >= 2) ctr++;
  }
  printf("%d\n", ctr);
  return 0;
}
