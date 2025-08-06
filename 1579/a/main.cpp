#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    int ctr{};
    string s;
    cin >> s;
    for(char c: s){
      if(c == 'B'){
        ctr++;
      } else {
        ctr--;
      }
    }
    if(ctr == 0){
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}
