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
    vector<ll> mem({1});
    while(--n){
      int val = mem.back() + 3;
      mem.push_back(val);
    }
    for(ll e: mem){
      cout << e << " ";
    } cout << endl;
  }
  return 0;
}
