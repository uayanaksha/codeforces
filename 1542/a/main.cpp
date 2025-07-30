#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    int n, ai, oddCtr{}, evenCtr{};
    cin >> n;
    for(int i{}; i<2*n; i++){
      cin >> ai;
      if(ai%2){
        ++oddCtr;
      }
    }
    evenCtr = 2*n - oddCtr;
    cout << ( oddCtr == evenCtr ? "YES" : "NO") << endl;
  }
  return 0;
}
