#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while(t--){
    ll n, ub=10e9, lb=1;
    cin >> n;
    vector<ll> mem;
    while(n--){
      ll a, x;
      cin >> a >> x;
      switch (a) {
        case 1: if(x>lb){ lb = x; } break;
        case 2: if(x<ub){ ub = x; } break;
        default: mem.push_back(x);
      }
    }
    int ctr = (ub - lb + 1);
    if(ctr <= 0) {
      cout << 0 << endl; 
      continue;
    }
    for(ll l: mem){
      if(lb <= l && l <= ub) --ctr;
    }
    cout << ctr << endl;
  }
  return 0;
}
