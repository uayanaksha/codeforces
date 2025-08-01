#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
void findLCM(ll l, ll r){
  if( l*2 <= r){
    cout << l << " " << l*2 << endl;
      return;
  }
  cout << -1 << " " << -1 << endl;
}
int main(void){
  int t;
  cin >> t;
  while(t--){
    ll l, r;
    cin >> l >> r;
    findLCM(l, r);
  }
  return 0;
}
