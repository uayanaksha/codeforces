#include <stdio.h>
int main(void){
  int n;
  char buff[50];
  scanf("%d", &n);
  scanf("%s", buff);
  if (n < 2) {
    printf("0");
    puts("");
    return 0;
  }
  char *ptr = buff;
  char prev = *ptr;
  unsigned int ctr = 0;
  for(int i = 1; i < n; i++){
    ptr++;
    if(*ptr == prev){
      ctr++;
    } else {
      prev = *ptr;
    }
  }
  printf("%d", ctr);
  puts("");
  return 0;
}
