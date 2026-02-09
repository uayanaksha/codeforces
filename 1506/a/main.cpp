#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while(t--){
    ll n, m, x, Q, R;
    cin >> n >> m >> x;
    Q = (x/n);
    R = (x%n);
    if(R>0) Q++;
    if(R==0) R=n;
    cout << ((R-1)*m + Q) << endl;
  }
  return 0;
}
