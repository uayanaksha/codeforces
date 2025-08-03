#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    bool is_important = true;
    string s;
    cin >> s;
    if(s.size() < 3 || stoi(s.substr(0, 2)) != 10){
      is_important = false;
    }
    if(!is_important){
      cout << "NO" << endl;
      continue;
    }
    if(s[2] - '0' == 0 || stoi(s.substr(2, s.size())) < 2){
      is_important = false;
    }
    if(is_important){
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}
