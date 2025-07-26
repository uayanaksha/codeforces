#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    string s;
    cin >> s;
    int ctr{};
    const char* codeforces = "codeforces";
    for(int i{}; i<10; i++){
      if(s[i] != codeforces[i]){
        ++ctr;
      }
    }
    cout << ctr << endl;
  }
  return 0;
}
