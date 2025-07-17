#include <stdio.h>
int main(){
  int n;
  scanf("%d", &n);
  if (n<4) {
    printf("NO");
    return 0;
  }
    
  if(n%2) {
    printf("NO");
  } else {
    printf("YES");
  }
  return 0;
}
