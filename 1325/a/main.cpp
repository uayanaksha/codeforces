#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    for(int i{1}; i<=n/2; i++){
      int j = n-i;
      int b = j / i;
      int a = i * j / b;
      if(a*b != i*j) continue;
      cout << a << " " << b << endl;
      break;
    }
  }
  return 0;
}
