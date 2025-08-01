#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    string a, b;
    cin >> a;
    for(auto e: a){
      if(e == 'q'){
        b = 'p' + b;
      } else if (e == 'p') {
        b = 'q' + b;
      } else {
        b = e + b;
      }
    }
    cout << b << endl;
  }
  return 0;
}
