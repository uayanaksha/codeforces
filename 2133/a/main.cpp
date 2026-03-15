#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while(t--){
    int n, t;
    bool found = false;
    cin >> n;
    vector<int> v(101, 0);
    for(int i{}; i<n; ++i){
      cin >> t;
      if(++v[t] > 1){
        found = true;
      }
    }
    cout << (found ? "YES": "NO") << '\n';
  }
  return 0;
}
