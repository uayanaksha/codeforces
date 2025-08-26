#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    int n;
    string s;
    char c;
    cin >> n;
    for(int i{}; i<n; ++i){
      cin >> c;
      c = tolower(c);
      if(s.empty()){
        s = c;
        continue;
      }
      if(s.back() != c){
        s.push_back(c);
      }
    }
    if(s == "meow"){
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}
