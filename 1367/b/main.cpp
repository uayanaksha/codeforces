#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    int n, ai{}, oddMismatchCtr{}, evenMismatchCtr{};
    cin >> n;
    for(int i{}; i < n; i++){
      cin >> ai;
      if(ai%2 != i%2){
        if(ai%2){
          ++oddMismatchCtr;
        } else {
          ++evenMismatchCtr;
        }
      }
    }
    if(oddMismatchCtr != evenMismatchCtr){
      cout << -1 << endl;
    } else {
      cout << oddMismatchCtr << endl;
    }
  }
  return 0;
}
