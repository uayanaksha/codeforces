#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while(t--){
    int n, ctr{};
    ll ptr{INT_MAX};
    cin >> n;
    vector<ll> mem(n);
    for(ll &i: mem){
      cin >> i;
      if(i < ptr){
        ptr = i;
      }
    }
    for(int i{}; i<n; ++i){
      if(mem[i] == ptr){
        continue;
      }
      ++ctr;
    }
    cout << ctr << endl;
  }
  return 0;
}
