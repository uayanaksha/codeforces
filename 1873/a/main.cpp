#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  string s;
  while(t--){
    cin >> s;
    if(s[0] == 'a' || s[1] == 'b' || s[2] == 'c'){
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}
