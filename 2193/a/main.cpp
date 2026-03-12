#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while(t--){
    int n, s, x, sum=0;
    cin >> n >> s >> x;
    vector<ll> mem(n);
    for(ll &i: mem){
      cin >> i;
      sum = sum + i;
    }
    bool is_possible = sum <= s && (s - sum) % x == 0;
    cout << (is_possible ? "YES" : "NO") << '\n';
  }
  return 0;
}
