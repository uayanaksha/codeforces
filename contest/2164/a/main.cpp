#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while(t--){
    ll n, maxim=INT_MIN, minim=INT_MAX;
    cin >> n;
    vector<ll> mem(n);
    for(ll &i: mem){
      cin >> i;
      maxim = max(maxim, i);
      minim = min(minim, i);
    }
    cin >> n;
    bool signal = minim <= n && n <= maxim;
    cout << (signal ? "YES" : "NO") << endl;
  }
  return 0;
}
