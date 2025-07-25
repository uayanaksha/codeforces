#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t, a, b, c;
  cin >> t;
  while(t--){
    cin >> a >> b >> c;
    if(b < c){
      if ( a < b){
        cout << b << endl;
      } else {
        if(a < c){
          cout << a << endl;
        } else {
          cout <<  c << endl;
        }
      }
    } else { /* c < b*/
      if(a < c){
        cout << c << endl;
      } else {
        if (a < b) {
          cout << a << endl;
        } else {
          cout <<  b << endl;
        }
      }
    }
  }
  return 0;
}
