#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while(t--){
    int n,tmp, max_ptr=0;
    cin >> n;
    vector<ll> mem(n+1, 0);
    for(int i{}; i<n; ++i){
      cin >> tmp;
      ++mem[tmp];
      if(mem[tmp] > mem[max_ptr]){
        max_ptr = tmp;
      }
    }
    int moves = n - mem[max_ptr];
    cout << moves << endl;
  }
  return 0;
}
