#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    int n, oddCtr{}, ai;
    cin >> n;
    while(n--){
      cin >> ai;
      if(ai%2){
        ++oddCtr;
      }
    }
    if(oddCtr%2){
      cout << "NO" << endl;
    } else {
      cout << "YES" << endl;
    }
  }
  return 0;
}
