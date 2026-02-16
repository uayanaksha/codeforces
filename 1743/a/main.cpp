#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int factorial(const int& n){
  if(n < 2) return 1;
  return n * factorial(n-1);
}
int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    vector<ll> mem(n);
    for(ll &i: mem){
      cin >> i;
    }
    int r = 10 - n;
    int C = factorial(r) / 2 / factorial(r-2);
    int res = 6 * C;
    cout << res << endl;
  }
  return 0;
}
