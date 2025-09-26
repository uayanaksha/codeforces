#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    vector<ll> mem(n);
    for(ll &i: mem){
      cin >> i;
    }
    cout << mem.back() << endl;
  }
  return 0;
}
