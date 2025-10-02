#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while(t--){
    ll n, x, ctr{}, range_ctr{}, curr, curr_min{INT_MAX};
    cin >> n >> x;
    vector<ll> a(n), mem;
    for(ll& i: a){
      cin >> i;
    }
    sort(a.begin(), a.end(), greater<ll>());
    for(int i{}; i<n; ++i){
      curr = a[i];
      if(curr >= x){
        ctr++;
      } else {
        mem.push_back(curr);
      }
      if(!mem.empty()){
        int minim = mem.back()*mem.size();
        if(minim>=x){
          ++ctr;
          mem.clear();
        }
      }
    }
    cout << ctr << endl;
  }
  return 0;
}
