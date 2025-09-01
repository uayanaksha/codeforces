#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while(t--){
    int n, ai, ctr{};
    cin >> n;
    vector<bool> mem(n+1, false);
    for(int i{}; i<n; ++i){
      cin >> ai;
      if(mem[ai]){
        ctr++;
      }
      mem[ai] = !mem[ai];
    }
    cout << ctr << endl;
  }
  return 0;
}
