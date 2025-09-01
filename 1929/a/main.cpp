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
    for(ll &ai: mem){
      cin >> ai;
    }
    sort(mem.begin(), mem.end(), less<ll>());
    ll sum{};
    for(int i{1}; i<n; ++i){
      sum += (mem[i] - mem[i-1]);
    }
    cout << sum << endl;
  }
  return 0;
}
