#include <bits/stdc++.h>
#include <climits>
using namespace std;
using ll = unsigned long long;
int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while(t--){
    ll n, minim = INT_MAX;
    cin >> n;
    vector<ll> mem(n);
    for(ll &i: mem){
      cin >> i;
    }
    sort(mem.begin(), mem.end());
    for(ll e: mem){
      for(ll i=2; i<=e + 1; ++i){
        if(gcd(e ,i) == 1){
          minim = min(minim, i);
          break;
        }
      }
    }
    if(minim == INT_MAX){
      cout << -1 << endl;
    } else {
      cout << minim << endl;
    }
  }
  return 0;
}
