#include <bits/stdc++.h>
using namespace std;
int main(void){
  string s1, s2, p;
  cin >> s1 >> s2 >> p;
  vector<int> mem(26, 0);
  bool isPossible = true;
  if(s1.size() + s2.size() < p.size()) {
    cout << "NO" << endl;
  } else {
    for(auto e: s1){
      mem.at(e-'A')++;
    }
    for(auto e: s2){
      mem.at(e-'A')++;
    }
    for(auto e: p){
      mem.at(e-'A')--;
    }
    for(auto e: mem){
      if(e != 0){
        isPossible = false;
        break;
      }
    }
    cout << ( isPossible ? "YES" : "NO" ) << endl;
  }
  return 0;
}
