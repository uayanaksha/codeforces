#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    int a, b, c, maxCtr{};
    cin >> a >> b >> c;
    int maxim = (a > b) ? (a > c) ? a : (b > c) ? b : c : (b > c) ? b : c; 
    if (a == maxim) maxCtr++;
    if (b == maxim) maxCtr++;
    if (c == maxim) maxCtr++;
    if(maxCtr > 1){
      if(a == maxim) cout << 1 << " ";
      else cout << maxim - a + 1 << " ";
      if(b == maxim) cout << 1 << " ";
      else cout << maxim - b + 1 << " ";
      if(c == maxim) cout << 1 << " ";
      else cout << maxim - c + 1 << " ";
    } else {
      if(a == maxim) cout << 0 << " ";
      else cout << maxim - a + 1 << " ";
      if(b == maxim) cout << 0 << " ";
      else cout << maxim - b + 1 << " ";
      if(c == maxim) cout << 0 << " ";
      else cout << maxim - c + 1 << " ";
    } cout << endl;
  }
  return 0;
}
