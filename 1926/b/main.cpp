#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    int n, prev{};
    char ai;
    bool isSquare = true, sig=false;
    cin >> n;
    for(int i{}; i<n; ++i){
      int ctr=0;
      for(int j{}; j<n; ++j){
        cin >> ai;
        if(ai=='0') continue;
        ctr++;
      }
      if(sig) continue;
      if(ctr == 0) continue;
      if(prev == 0){
        prev = ctr;
      } else {
        sig=true;
        if(prev == ctr){
          isSquare = true;
        } else {
          isSquare = false;
        }
      }
    }
    cout << (isSquare ? "SQUARE" : "TRIANGLE") << endl;
  }
  return 0;
}
