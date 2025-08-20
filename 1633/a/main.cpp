#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    int n, digits{};
    cin >> n;
    string s;
    s = to_string(n);
    digits = s.length();
    if(n%7==0 && !s.contains('0')){
      cout << n << endl;
      continue;
    }
    string cp(s);
    for(int i{}; i<s.length(); ++i){
      if(s[i]!= 0) continue;
      for(int j{1}; j<10; ++j){
        cp[i] = '0' + j;
        if(stoi(cp) % 7 == 0){
          s = cp;
          break;
        }
      }
    }
    if(stoi(s) % 7 == 0){
      cout << s << endl;
      continue;
    }
    cp = s;
    for(int i{1}; i<10; ++i){
      cp[cp.length() - 1] = '0' + i;
      if(stoi(cp) % 7 == 0){
        cout << cp << endl;
        break;
      }
    }
  }
  return 0;
}
