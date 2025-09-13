#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while(t--){
    int n, m, x, y;
    cin >> n >> m >> x >> y;
    vector<ll> mema(n), memb(m);
    for(ll &i: mema){
      cin >> i;
    }
    for(ll &i: memb){
      cin >> i;
    }
    int sum = mema.size() + memb.size(); 
    cout << sum << endl;
  }
  return 0;
}
