#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n, l{}, r{};
  cin >> n;
  char c;
  while(n--){
    cin >> c;
    switch (c) {
      case 'L': ++l; break;
      default: ++r; break;
    }
  }
  cout << l+r+1 << endl;
  return 0;
}
