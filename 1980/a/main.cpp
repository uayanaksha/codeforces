#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    int n, m, minCtr{};
    vector<int> mem(7, 0);
    string a;
    cin >> n >> m >> a;
    for(auto e: a){
      mem[e-'A']++;
    }
    for(auto e: mem){
      if(e >= m) continue;
      minCtr += (m - e);
    }
    cout << minCtr << endl;
  }
  return 0;
}
