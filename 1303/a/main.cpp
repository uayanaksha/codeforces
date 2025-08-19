#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    string s;
    int start = -1, end = -1, ctr{};
    cin >> s;
    for(int i{}; i<s.size(); ++i){
      if(s[i] != '1') continue;
      start = i;
      break;
    }
    for(int i=s.size()-1; i>=0; --i){
      if(s[i] != '1') continue;
      end = i;
      break;
    }
    if(start == -1){
      cout << 0 << endl;
      continue;
    }
    for(int i=start; i<end; i++){
      if(s[i] != '0') continue;
      ++ctr;
    }
    cout << ctr << endl;
  }
  return 0;
}
