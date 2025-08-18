#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    int n, cp, digitCtr{};
    cin >> n;
    cp = n;
    while(cp > 9){
      ++digitCtr;
      cp /=10;
    }
    digitCtr *= 9;
    digitCtr += cp;
    cout << digitCtr << endl;
  }
  return 0;
}
