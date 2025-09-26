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
    bool signal = true;
    cin >> n;
    vector<ll> mem(n);
    for(ll &i: mem){
      cin >> i;
    }
    vector<ll> v(mem);
    sort(v.begin(), v.end());
    for(int i{}; i<n; ++i){
      if(mem[i]%2 != v[i]%2){
        signal = false;
      }
    }
    cout << (signal ? "YES" : "NO") << endl;
  }
  return 0;
}
