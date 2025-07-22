#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t, n, ans;
  cin >> t;
  while(t--){
    cin >> n;
    if(n<3){
      ans = 0;
    } else if (n % 2) {
      ans = n/2;
    } else if (n % 2 == 0) {
      ans = --n/2;
    }
    cout << ans << endl;
  }
  return 0;
}
