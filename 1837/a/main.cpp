#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    int x, k;
    cin >> x >> k;
    if(k == 1){
      cout << 0 << endl;
      continue;
    }
    if(x%k != 0){
      cout 
        << 1 << endl 
        << x << endl;
    } else {
      cout 
        << 2 << endl 
        << x+1 << " " << -1 << endl;
    }
  }
  return 0;
}
