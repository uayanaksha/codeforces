#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    int w, h, n, ctr{1};
    cin >> w >> h >> n;
    while(w % 2 == 0){
      ctr<<=1;
      w>>=1;
    }
    while(h % 2 == 0){
      ctr<<=1;
      h>>=1;
    }
    if(ctr >= n) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}
