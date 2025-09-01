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
    vector<ll> mem(n), mem2;
    for(ll &ai: mem){
      cin >> ai;
      if(mem2.empty()){
        mem2.push_back(ai % 2);
        continue;
      }
      if(ai%2 == mem2.back()) continue;
      mem2.push_back(ai%2);
    }
    cout << n - mem2.size() << endl;
  }
  return 0;
}
