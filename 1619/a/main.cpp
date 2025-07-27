#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  string s;
  cin >> t;
  while(t--){
    cin >> s;
    if(s.size()%2){
      cout << "NO" << endl;
    } else {
      int start{}, end = s.size()/2;
      bool isSquare = true;
      while(end < s.size()){
        if(s[start++] != s[end++]){
          isSquare = false;
          break;
        }
      }
      if(isSquare){
        cout << "YES" << endl;
      } else {
        cout << "NO" << endl;
      }
    }
  }
  return 0;
}
