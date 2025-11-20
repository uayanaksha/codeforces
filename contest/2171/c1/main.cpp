#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while(t--){
    ll n, ax{}, bx{};
    cin >> n;
    vector<ll> a(n), b(n);
    for(ll &i: a){
      cin >> i;
      ax ^= i;
    }
    for(ll &i: b){
      cin >> i;
      bx ^= i;
    }
    for(int i{}; i<n; ++i){
      int num = a[i]^b[i];
      if(i % 2 == 0){
        if(ax < (ax^num)){
          ax = ax ^ num;
          bx = bx ^ num;
        }
      } else {
        if(bx < (bx^num)){
          bx = bx ^ num;
          ax = ax ^ num;
        }
      }
    }
    if(ax == bx){
      cout << "Tie" << endl;
    } else {
      cout << (ax > bx ? "Ajisai" : "Mai") << endl;
    }
  }
  return 0;
}
