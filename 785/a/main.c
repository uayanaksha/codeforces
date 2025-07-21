#include <stdio.h>
int main(void){
  int n, ctr = 0;
  char s[20];
  scanf("%d", &n);
  while (n--){
    scanf("%s", s);
    if (s[0] == 'T'){
      ctr += 4; 
    }
    if (s[0] == 'C'){
      ctr += 6; 
    }
    if (s[0] == 'O'){
      ctr += 8; 
    }
    if (s[0] == 'D'){
      ctr += 12; 
    }
    if (s[0] == 'I'){
      ctr += 20; 
    }
  }
  printf("%d\n", ctr);
  return 0;
}
