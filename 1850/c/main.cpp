#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    char c;
    string s;
    for(int i{}; i<64; i++){
      cin >> c;
      if(c == '.') continue;
      s += c;
    }
    cout << s << endl;
  }
  return 0;
}
