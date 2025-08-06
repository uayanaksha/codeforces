#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    int correctDigits = 0;
    string s, pi = "314159265358979323846264338327";
    cin >> s;
    for(int i{}; i < 30; i++){
      if(s[i]!=pi[i]) break;
      else ++correctDigits;
    }
    cout << correctDigits << endl;
  }
  return 0;
}
