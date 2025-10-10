#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while(t--){
    const int n = 3;
    vector<ll> mem(n);
    for(ll &i: mem){
      cin >> i;
    }
    sort(mem.begin(), mem.end());
    ll arr[3] = {
      (mem.back() & mem.at(1)),
      (mem.front() & mem.at(1)),
      (mem.front() & mem.back())
    };
    bool signal = arr[0] == arr[1] && arr[1] == arr[2];
    cout << (signal ? "YES" : "NO") << endl;
  }
  return 0;
}
