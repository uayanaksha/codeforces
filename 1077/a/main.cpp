#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while(t--){
    ll a, b, k, diff, pos{};
    cin >> a >> b >> k;
    diff = a-b;
    pos = diff * (k/2);
    if(k%2){
      pos += a;
    }
    cout << pos << endl;
  }
  return 0;
}
