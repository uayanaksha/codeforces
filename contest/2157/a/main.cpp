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
    vector<ll> mem(101, 0);
    for(int i{}; i<n; ++i){
      int x;
      cin >> x;
      mem[x]++;
    }
    for(int i{}; i<101; ++i){
      if(mem[i] == 0) continue;
      if(mem[i] > i) ctr+= (mem[i] - i);
      else if(mem[i] < i) ctr+= (mem[i]);
    }
    cout << ctr << endl;
  }
  return 0;
}
