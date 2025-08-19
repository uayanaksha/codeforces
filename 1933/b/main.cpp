#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    int n, ai, sum{};
    bool rem1IdxPresent=false;
    cin >> n;
    for(int i{}; i<n; i++){
      cin >> ai;
      if(ai%3==0) {
        continue;
      }
      sum += ai;
      if(ai%3==1) {
        rem1IdxPresent=true;
      }
      if(sum%3==0) {
        sum = 0;
      }
    }
    if(sum == 0){
      cout << 0 << endl;
    } else if(sum %3 == 1 && !rem1IdxPresent){
      cout << 2 << endl;
    } else {
      cout << 1 << endl;
    }
  }
  return 0;
}
