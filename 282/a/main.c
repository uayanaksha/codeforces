#include <stdio.h>
#include <string.h>

int main(void){
  int n;
  scanf("%d", &n);
  int X=0;
  char s[4];
  while(n--){
    scanf("%s", s);
    if (strcmp(s, "X++") == 0) ++X;
    else if (strcmp(s, "++X") == 0) ++X;
    else if (strcmp(s, "X--") == 0) --X;
    else if (strcmp(s, "--X") == 0) --X;
  }
  printf("%d", X);
  puts("");
  return 0;
}
