#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    int n, ai, ctr1{}, ctrm1{}, moves{};
    cin >> n;
    for(int i{}; i<n; i++){
      cin >> ai;
      if(ai == -1){
        ++ctrm1;
      }
    }
    ctr1 = n-ctrm1;
    bool signal = (ctrm1*2 <= n) && (ctrm1%2==0);
    while(!signal){
      ++moves;
      --ctrm1;
      ++ctr1;
      signal = (ctrm1*2 <= n) && (ctrm1%2==0);
    }
    cout << moves << endl;
  }
  return 0;
}
