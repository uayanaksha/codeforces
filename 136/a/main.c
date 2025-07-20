#include <stdio.h>
int main(void){
  unsigned n, input;
  scanf("%u", &n);
  unsigned arr[n];
  for (int i=1; i <= n; i++) {
   scanf("%u", &input); 
   arr[input] = i;
  }
  for (int i=1; i <= n; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
  return 0;
}
