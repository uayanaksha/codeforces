#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    char s;
    unsigned ctrA{};
    for(int i{}; i<5; i++){
      cin >> s;
      if(s == 'A') {
        ctrA++;
      }
    }
    cout << (ctrA > 2 ? "A" : "B") << endl;
  }
  return 0;
}
