#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
  int n;
  cin >> n;
  deque<ll> mem(n);
  for(ll &i: mem){
    cin >> i;
  }
  mem.push_front(0);
  bool found = false;
  for(int i=1; i<=n && !found; ++i){
    int p1 = mem[i];
    int p2 = p1 >= 0 && p1 < n ? mem[p1] : -1;
    int p3 = p2 >= 0 && p2 < n ? mem[p2] : -1;
    found = p2 >= 0 && p2 < n ? mem[p3] == p1 : false;
  }
  cout << (found ? "YES" : "NO") << '\n';
}

int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  solve();
  return 0;
}
