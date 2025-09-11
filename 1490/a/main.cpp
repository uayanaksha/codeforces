#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while(t--){
    int n, ctr{};
    cin >> n;
    vector<ll> mem(n);
    for(ll &i: mem){
      cin >> i;
    }
    for(int i{1}; i<n; ++i){
      int diff = abs(mem[i]-mem[i-1]);
      int minim = min(mem[i], mem[i-1]);
      if(diff <= minim){
        continue;
      }
      int maxim = max(mem[i], mem[i-1]);
      while(maxim > 2*minim){
        ++ctr;
        minim *= 2;
      }
    }
    cout << ctr << endl;
  }
  return 0;
}
