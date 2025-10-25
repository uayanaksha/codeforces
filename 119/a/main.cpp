#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int a, b, n, ctrA{}, ctrB{};
  cin >> a >> b >> n;
  while(n > 0){
    if(n) {
      n -= gcd(a, n);
      ++ctrA;
    }
    if(n) {
      n -= gcd(b, n);
      ++ctrB;
    }
  }
  cout << (ctrA <= ctrB) << endl;
  return 0;
}
