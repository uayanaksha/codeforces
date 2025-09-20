#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while(t--){
    int x, y;
    cin >> x >> y;

    if(x < y){
      cout << 2 << endl;
    } else if(abs(x-y) < 2){
      cout << -1 << endl;
    } else {
      if(x == 1 || y == 1){
        cout << -1 << endl;
      } else {
        cout << 3 << endl;
      }
    }
  }
  return 0;
}
