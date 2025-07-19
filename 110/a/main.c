#include <stdio.h>
int main(void){
  unsigned long long i, digit, luckyCtr = 0;
  scanf("%lld", &i);
  while (i > 0){
    digit = i % 10;
    if(digit == 4 || digit == 7) {
      ++luckyCtr;
    }
    i /= 10;
  }
  if(luckyCtr == 4 || luckyCtr == 7){
      printf("YES");
  } else {
      printf("NO");
  }
  puts("");
  return 0;
}
