#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while(t--){
    size_t n;
    cin >> n;
    vector<ll> mem(n);
    ll maxim = INT_MIN;
    for(ll& i: mem){
      cin >> i;
    }
    for(int i=1; i<n; ++i){
      ll p = mem[i]*mem[i-1];
      if(p>maxim){
        maxim = p;
      }
    }
    cout << maxim << endl;
  }
  return 0;
}
