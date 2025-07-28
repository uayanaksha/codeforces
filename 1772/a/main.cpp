#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t, ans;
  char c1,op,c2;
  cin >> t;
  while(t--){
    cin >> c1 >> op >> c2;
    ans = c1 - '0' + c2 - '0';
    cout << ans << endl;
  }
  return 0;
}
