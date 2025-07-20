#include <stdio.h>
#include <string.h>
int main(void){
  int n, ctr = 0; 
  char prev[3], curr[3];
  scanf("%d", &n);
  for(int i=0; i < n; i++){
    scanf("%s", curr);
    if (strcmp(prev, curr) != 0){
      ctr++;
      strcpy(prev, curr);
    }
  }
  printf("%d\n", ctr);
  return 0;
}
