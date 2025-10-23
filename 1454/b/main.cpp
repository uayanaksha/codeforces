#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while(t--){
    int n, maxim = INT_MIN, minim = INT_MAX;
    cin >> n;
    vector<int> mem(2e5 + 3, 0), idx(2e5 + 3, -1);
    for(int i=1; i<=n; ++i){
      int x;
      cin >> x;
      ++mem[x];
      if(idx[x] < 0){ idx[x] = i; }
      if(i > maxim){ maxim = i; }
      if(i < minim){ minim = i; }
    }
    int l{minim};
    while(l <= maxim && mem[l] != 1){
      ++l;
    }
    if(mem[l] != 1){
      cout << -1 << endl;
    } else {
      cout << idx[l] << endl;
    }
  }
  return 0;
}
