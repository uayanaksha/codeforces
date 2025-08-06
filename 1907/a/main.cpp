#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    char c;
    int n;
    cin >> c >> n;
    for(char i{'a'}; i <= 'h'; i++){
      if(i == c) continue;
      cout << i << n << endl;
    }
    for(int j{1}; j <= 8; j++){
      if(j == n) continue;
      cout << c << j << endl;
    }
  }
  return 0;
}
