#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    int n;
    string s;
    bool isSus = false;
    cin >> n >> s;
    for(int i{}; i < n-1; i++){
      int lastPos = i;
      for(int j=i+1; j < n; j++){
        if(s[lastPos] != s[j]) continue;
        if(lastPos+1 == j){
          lastPos=j;
        } else {
          isSus = true;
          break;
        }
      }
      if(isSus) break;
    }
    cout << (isSus ? "NO" : "YES") << endl;
  }
  return 0;
}
