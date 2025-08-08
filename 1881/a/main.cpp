#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    int n, m, ctr{};
    bool notFound = false;
    string x, s;
    cin >> n >> m >> x >> s;
    if(n < m){
      for(auto e: x){
        if(!s.contains(e)) {
          notFound = true;
        }
      }
    } else {
      for(auto e: s){
        if(!x.contains(e)) {
          notFound = true;
        }
      }
    }
    if(notFound){
      cout << -1 << endl;
      continue;
    }
    while(!x.contains(s)){
      ++ctr;
      x+=x;
      if(ctr > 10){
        notFound = true;
        break;
      }
    }
    if(notFound){
      cout << -1 << endl;
    } else {
      cout << ctr << endl;
    }
  }
  return 0;
}
