#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    string s;
    if(n < 28){
      s = "aaa";
      s[2] = 'a' + char(n-3);
    } else if(n < 53){
      s = "aaz";
      s[1] = 'a' + char(n-28);
    } else {
      s = "zzz";
      s[0] = 'a' + char(n-53);
    }
    cout << s << endl;
  }
  return 0;
}
