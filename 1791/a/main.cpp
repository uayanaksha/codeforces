#include <bits/stdc++.h>
using namespace std;
int main(void){
  string s{"codeforces"};
  int t;
  cin >> t;
  unsigned char c;
  while(t--){
    cin >> c;
    if(s.contains(c)){
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}
