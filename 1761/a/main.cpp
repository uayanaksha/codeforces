#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while(t--){
    int n, a, b;
    cin >> n >> a >> b;
    bool signal = (n - a - b) > 1 || (n == a && a == b);
    cout << (signal ? "YES" : "NO") << endl;
  }
  return 0;
}
