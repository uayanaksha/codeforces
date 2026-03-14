#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    int n, k, ctr = 0;
    cin >> n >> k;
    vector<int> v(n), _0;
    for(auto& i: v) cin >> i;
    for(int i{}; i<n;){
      int ctr0 = 0;
      while(i<n && v[i] == 0){
        ctr0++;
        ++i;
      }
      _0.push_back(ctr0+1);
      while(i<n && v[i] == 1){
        ++i;
      }
    }
    ++k;
    for(const auto& i :_0){
      ctr = ctr + (i/k);
    }
    cout << ctr << '\n';
}
int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while(t--)
    solve();
  return 0;
}
