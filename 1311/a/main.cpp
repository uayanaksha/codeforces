#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    int a, b, diff;
    cin >> a >> b;
    diff = b - a;
    if(diff == 0){
      cout << 0 << endl;
      continue;
    }
    if(a < b){
      if(diff%2 == 1){
        cout << 1 << endl;
      } else {
        cout << 2 << endl;
      }
    } else {
      if(diff%2 == 0){
        cout << 1 << endl;
      } else {
        cout << 2 << endl;
      }

    }
  }
  return 0;
}
