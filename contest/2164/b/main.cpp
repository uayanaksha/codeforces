#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    vector<ll> mem(n);
    for(ll &i: mem){
      cin >> i;
    }
    bool signal = false;
    for(int i{}; i<n-1; ++i){
      for(int j{i+1}; j<n; ++j){
        if(mem[j] % mem[i] % 2 == 0){
          signal = true;
          cout << mem[i] << " " << mem[j] << endl;
          break;
        }
      }
      if(signal) break;
    }
    if(!signal) cout << -1 << endl;
  }
  return 0;
}
