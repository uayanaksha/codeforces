#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
  int n, m, k{};
  string a, b;
  cin >> n >> m >> a >> b;
  for(int i{}; i<m && k<n; ++i){
    if(a[k] == b[i]){
      ++k;
    }
  }
  cout << k << '\n';
}

int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}
