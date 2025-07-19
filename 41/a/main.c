#include <stdio.h>
#include <string.h>
int main(void){
  char s[101], t[101];
  scanf("%s", s);
  scanf("%s", t);
  if(strlen(s) != strlen(t)) {
    printf("NO");
    puts("");
    return 0;
  }
  size_t size = strlen(s);
  int isEqual = 1;
  for (int i=0; i < size; i++) {
    if(s[i] != t[size - i - 1]){
      isEqual = 0;
      break;
    }
  }
  if (isEqual){
    printf("YES");
  } else  {
    printf("NO");
  }
  puts("");
  return 0;
}
