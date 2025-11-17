#include <bits/stdc++.h>
#include <numeric>
using namespace std;
using ll = long long;
int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while(t--){
    vector<ll> mem(3);
    for(ll &i: mem){
      cin >> i;
    }
    ll res = accumulate(mem.begin(), mem.end(), 0LL) / 2L;
    cout << res << endl;
  }
  return 0;
}
