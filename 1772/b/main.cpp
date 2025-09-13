#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while(t--){
    int a[4];
    cin >> a[0] >> a[1] >> a[2] >> a[3];
    bool signal = false;
    for(int i{}; i<4; ++i){
      signal = a[0] < a[1] && a[2] < a[3] && a[0] < a[2] && a[1] < a[3];
      if(signal){
        break;
      }
      int tmp = a[2];
      a[2] = a[3];
      a[3] = a[1];
      a[1] = a[0];
      a[0] = tmp;
    }
    cout << ( signal ? "YES" : "NO" ) << endl;
  }
  return 0;
}
