#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while(t--){
    int n, tmp{}, tmp2{};
    cin >> n;
    vector<ll> mem(n);
    for(ll &i: mem){
      cin >> i;
      tmp ^= i;
    }
    for(ll i: mem){
      tmp2 = tmp2 ^ (i^tmp);
    }
    cout << (tmp2 ==0 ? tmp : -1) << endl;
  }
  return 0;
}
