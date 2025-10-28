#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;
int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while(t--){
    int n, o=0, z=0;
    cin >> n;
    vector<ll> mem(n);
    for(ll &i: mem){
      cin >> i;
      if(i&1) o=1;
      else z=1;
    }
    if(o&z) sort(mem.begin(), mem.end());
    for(ll i: mem){ cout << i << " "; } cout << endl;
  }
  return 0;
}
