#include <bits/stdc++.h>
#include <functional>
#include <utility>
using namespace std;
using ll = long long;
int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while(t--){
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> mem(n);
    for(pair<int, int> &i: mem){
      cin >> i.first;
    }
    for(pair<int, int> &i: mem){
      cin >> i.second;
    }
    sort(mem.begin(), mem.end(), greater<pair<int, int>>());
    while(!mem.empty() && mem.back().first <= k){
      k += mem.back().second;
      mem.pop_back();
    }
    cout << k << endl;
  }
  return 0;
}
