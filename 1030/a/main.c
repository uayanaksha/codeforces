#include <stdio.h>
int main(){
  int n, ni, isHard = 0;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
   scanf("%d", &ni); 
   if (ni == 1){
     isHard = 1;
   }
  }
  if (isHard) printf("HARD\n");
  else printf("EASY\n");
  return 0;
}
