#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  cin >> n;
  vector<ll> mem(n);
  for(ll &i: mem){
    cin >> i;
  }
  unordered_map<int, bool> mp;
  deque<int> dq;
  for(int i=n-1; i>= 0; --i){
    if(mp[mem[i]]) continue;
    mp[mem[i]] = true;
    dq.push_front(mem[i]);
  }
  cout << dq.size() << endl;
  for(int e: dq){
    cout << e << " ";
  } cout << endl;
  return 0;
}
