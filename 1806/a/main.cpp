#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while(t--){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int diffx = c - a, diffy = d - b, ctr{};
    if(b > d || diffx > diffy){
      cout << -1 << endl;
      continue;
    }
    while(b < d){
      ++a;
      ++b;
      ++ctr;
    }
    while(a > c){
      --a;
      ++ctr;
    }
    cout << ctr << endl;
  }
  return 0;
}
