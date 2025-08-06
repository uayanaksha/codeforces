#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    int n, s, m, l, r, maxInterval{}, istart{}, iend{};
    bool canShower = false;
    cin >> n >> s >> m;
    for(int i{}; i<n; i++){
      cin >> l >> r;
      iend = l;
      if(iend - istart > maxInterval){
        maxInterval = iend - istart;
      }
      istart = r;
    }
    iend = m;
    if(iend - istart > maxInterval){
      maxInterval = iend - istart;
    }
    cout << (maxInterval >= s ? "YES" : "NO") << endl;
  }
  return 0;
}
