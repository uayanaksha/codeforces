#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while(t--){
    int b, c, h;
    cin >> b >> c >> h;
    b--;
    int layer = c + h;
    layer = min(layer, b) * 2 + 1;
    cout << layer << endl;
  }
  return 0;
}
