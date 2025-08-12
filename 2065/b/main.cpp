#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    string s;
    cin >> s;
    bool signal = false;
    if(!signal){
      for(int i{}; i<s.size()-1; i++){
        if(s[i] != s[i+1]) continue;
        signal = true;
        break;
      }
    }
    cout << (signal ? 1 : s.size()) << endl;
  }
  return 0;
}
