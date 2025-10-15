#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while(t--){
    int n, m, l, r;
    cin >> n >> m >> l >> r;
    if(abs(l) >= m){
      cout << -m << " " << 0 << endl;
      continue;
    }
    if(r >= m){
      cout << 0 << " " << m << endl;
      continue;
    }
    cout << l << " " << l+m << endl;
  }
  return 0;
}
