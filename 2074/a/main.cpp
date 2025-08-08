#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    int l, r, d, u;
    cin >> l >> r >> d >> u;
    if(l - r == 0 && u - d == 0 && r == u){
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}
