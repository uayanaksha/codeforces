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
    cin >> a>>  b>>  c>>  d;
    bool signal = (a == b && b == c && c == d);
    cout << (signal ? "YES" : "NO") << endl;
  }
  return 0;
}
