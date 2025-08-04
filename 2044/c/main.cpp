#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    int m, a, b, c;;
    cin >> m >> a >> b >> c;
    int row1 = m, row2 = m;
    if(row1 >= a){
      row1 -= a;
      if(row1 >= c){
        row1 -= c;
        c = 0;
      } else {
        c -= row1;
        row1 = 0;
      }
    } else {
      row1 = 0;
    }
    if(row2 > b){
      row2 -= b;
      if(row2 >= c){
        row2 -= c;
        c = 0;
      } else {
        c -= row2;
        row2 = 0;
      }
    } else {
      row2 = 0;
    }
    cout << (2*m) - row1 - row2 << endl;
  }
  return 0;
}
