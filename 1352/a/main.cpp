#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t, n, exp, ctr;
  cin >> t;
  while(t--){
    cin >> n;
    exp = 10000;
    ctr = 0;
    while(n/exp == 0){
      exp /= 10;
    }
    for(int i = exp; i > 0; i/=10){
      if(n/i % 10 != 0) ctr++;
    }
    cout << ctr << endl;
    for(int i = exp; i > 0; i/=10){
      if(n/i % 10 != 0) 
        cout << n/i % 10 * i << " ";
    }   cout << endl;
  }
  return 0;
}
