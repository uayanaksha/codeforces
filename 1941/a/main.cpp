#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    int m, n, k, bi, ci, ctr{};
    vector<int> b, c;
    cin >> n >> m >> k;
    for(int i{}; i<n; i++){
      cin >> bi;
      if(bi >= k) continue;
      b.emplace_back(bi);
    }
    for(int i{}; i<m; i++){
      cin >> ci;
      if(ci >= k) continue;
      c.emplace_back(ci);
    }
    for(auto e: b){
      for(auto f: c){
        if(e+f > k) continue;
        ctr++;
      }
    }
    cout << ctr << endl;
  }
  return 0;
}
