#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    int n, x, floorNo = 1;
    cin >> n >> x;
    if(n < 3){
      cout << 1 << endl;
    } else {
      floorNo = 2;
      n -= 2;
      while(n > x){
        n -= x;
        floorNo++;
      }
      cout << floorNo << endl;
    }
  }
  return 0;
}
