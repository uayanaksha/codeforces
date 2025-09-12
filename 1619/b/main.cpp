#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while(t--){
    ll n, ctr{};
    cin >> n;
    vector<bool> mem(n+1, false);
    for(ll i{1}; i*i*i<=n; ++i){
      ll val = i*i*i;
      if(mem[val]){
        continue;
      }
      mem[val] = true;
      ++ctr;
    }
    for(ll i{1}; i*i<=n; ++i){
      ll val = i*i;
      if(mem[val]){
        continue;
      }
      mem[val] = true;
      ++ctr;
    }
    cout << ctr << endl;
  }
  return 0;
}
