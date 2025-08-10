#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    int x, y;
    cin >> x;
    y = x>>1;
    if(y<<1 != x){
      y = x-1;
    }
    cout << y << endl;
  }
  return 0;
}
