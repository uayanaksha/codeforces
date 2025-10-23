#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while(t--){
    ll r, b, d;
    cin >> r >> b >> d;
    if(r>b){ swap(r, b); }
    bool signal = (d+1)*r >= b;
    cout << ( signal ? "YES" : "NO" ) << endl;
  }
  return 0;
}
