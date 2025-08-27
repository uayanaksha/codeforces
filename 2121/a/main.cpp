#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void){
  int t;
  cin >> t;
  while(t--){
    int n, s, total{};
    cin >> n >> s;
    vector<ll> mem(n);
    for(ll &i: mem){
      cin >> i;
    }
    if(n == 1){
      cout << abs(s - mem.front()) << endl;
      continue;
    }
    if(s >= mem.back()){
      total = s - mem.front();
    } else if(s <= mem.front()){
      total = mem.back() - s;
    } else {
      int dr = abs(s - mem.back()),
          dl = abs(s - mem.front());
      if(dl < dr){
        total = 2*dl + dr;
      } else {
        total = 2*dr + dl;
      }
    }
    cout << total << endl;
  }
  return 0;
}
