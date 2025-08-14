#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    string s;
    char c;
    bool isPossible = false;
    cin >> s >> c;
    int n = s.size();
    for(int i{}; i<s.size(); i++){
      if(s[i] != c) continue;
      if(i%2==0 && (n-i-1)%2==0){
        isPossible = true;
        break;
      }
    }
    cout << (isPossible ? "YES" : "NO") << endl;
  }
  return 0;
}
