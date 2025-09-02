#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while(t--){
    vector<ll> mem(7);
    for(ll &i: mem){
      cin >> i;
    }
    int a1 = mem[0], a2 = mem[1];
    int a3 = mem.back() - a1 - a2;
    println("{} {} {}", a1, a2, a3);
  }
  return 0;
}
