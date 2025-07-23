#include <bits/stdc++.h>
using namespace std;
int main(void){
  int k, r, digit{}, ctr = 1;
  cin >> k >> r;
  digit = k % 10;
  while((digit * ctr % 10 != r) && (digit * ctr % 10 != 0)){
    ctr++;
  }
  cout << ctr << endl;
  return 0;
}
