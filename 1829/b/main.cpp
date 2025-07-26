#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    int n, ai, ctr{}, max = INT_MIN;
    cin >> n;
    for(int i{}; i<n; i++){
      cin >> ai;
      if(ai == 0){
        ++ctr;
      } else {
        ctr = 0;
      }
      if(ctr > max){
        max = ctr;
      }
    }
    cout << max << endl;
  }
  return 0;
}
