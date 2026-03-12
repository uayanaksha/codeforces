#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    int n, j, k;
    int store, maxim = INT_MIN;
    cin >> n >> j >> k;
    vector<int> v(n);
    for(int i{}; i<n; ++i){
      cin >> v[i];
      if(i+1 == j) store = v[i];
      maxim = max(maxim, v[i]);
    }
    cout << ( k>=2 || maxim == store ? "YES": "NO") << endl;
}
int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while(t--) solve();
  return 0;
}
