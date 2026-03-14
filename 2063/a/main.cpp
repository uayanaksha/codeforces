#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while(t--){
    int l, r, ctr{};
    cin >> l >> r;
    cout << (l == r && r == 1 ? 1 : abs(l-r)) << endl;
  }
  return 0;
}
