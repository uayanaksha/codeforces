#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while(t--){
    int n, ans{};
    cin >> n;
    vector<ll> mem(n);
    for(ll &i: mem){
      cin >> i;
    }
    if(mem.front() < 0 || mem.back() < 0) {
      ans = 0;
      int num = mem.back() ^ mem.front() ^ -1;
      if(num == -1) num = 0;
      mem[0] = num;
      mem[n-1] = num;
    }
    else ans = llabs(mem.back() - mem.front());
    cout << ans << endl;
    for(ll i: mem){
      cout << (i < 0 ? 0 : i) << " ";
    } cout << endl;
  }
  return 0;
}
