#include <stdio.h>
int main(void){
  long long int n, ans; 
  scanf("%lld", &n);
  ans = n/2;
  if(n%2){
    ans = ans - n;
  }
  printf("%lld\n", ans);
  return 0;
}
