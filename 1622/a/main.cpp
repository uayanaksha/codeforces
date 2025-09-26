#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while(t--){
    bool signal = false;
    vector<ll> l(3);
    for(ll &i: l){
      cin >> i;
    }
    sort(l.begin(), l.end());
    if(l[1] == l[0] || l[2] == l[1]){
      int side = l[0] ^ l[1] ^ l[2];
      signal = side % 2 == 0;
    } else {
      signal = l[0] + l[1] == l[2];
    }
    cout << ( signal ? "YES" : "NO" ) << endl;
  }
  return 0;
}
