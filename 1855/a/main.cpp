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
    vector<ll> mem(n+1);
    for(int i{1}; i<=n; ++i){
      cin >> mem[i];
      if(mem[i] == i) ++ctr;
    }
    cout << (ctr == 0 ? ctr : (ctr+1)/2) << endl;
  }
  return 0;
}
