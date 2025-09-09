#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while(t--){
    int n, sum{}, q{}, ctr{};
    cin >> n;
    vector<ll> mem(n);
    for(ll &i: mem){
      cin >> i;
      sum += i;
    }
    if((sum/n)*n != sum){
      cout << -1 << endl;
      continue;
    }
    q = sum/n;
    for(ll i: mem){
      if(i>q){
        ++ctr;
      }
    }
    cout << ctr << endl;
  }
  return 0;
}
