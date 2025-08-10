#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    for(int i{}; i<n; i++){
      if(i%2==0){
        cout << -1 << " ";
      } else {
        if(i == n-1){
          cout << 2 << " ";
        } else {
          cout << 3 << " ";
        }
      }
    } cout << endl;
  }
  return 0;
}
