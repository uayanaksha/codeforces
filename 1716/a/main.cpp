#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    long long n, ans;
    cin >> n;
    if(n < 5 && n%3 == 1){
      cout << 2 << endl;
      continue;
    }
    switch (n%3) {
      case 0: ans = n/3 ; break;
      case 1: 
      case 2: ans = n/3 + 1; break;
    }
    {
      int ans2 = n/2 + ((n%2) * 2);
      if(ans2 < ans){
        ans = ans2;
      }
    }
    cout << ans << endl;
  }
  return 0;
}
