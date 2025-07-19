#include <stdio.h>
int main(void){
  int n, A = 0, D = 0;
  char buff[100000];
  scanf("%d", &n);
  scanf("%s", buff);
  for (int i = 0; i < n; i++) {
    if(buff[i] == 'A') A++; 
  }
  D = n - A;
  if (A == D){
    printf("Friendship");
  } else if (A > D) {
    printf("Anton");
  } else {
    printf("Danik");
  }
  puts("");
  return 0;
}
