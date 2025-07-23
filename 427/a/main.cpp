#include <bits/stdc++.h>
using namespace std;
int main(void){
  int n, ni, pCtr = 0, cCtr = 0;
  cin >> n;
  while (n--) {
    cin >> ni;
    if (ni != -1){
      pCtr+=ni;
    } else {
      if(pCtr > 0){
        pCtr--;
      } else {
        pCtr = 0;
        cCtr++;
      }
    }
  }
  cout << cCtr << endl;
  return 0;
}
