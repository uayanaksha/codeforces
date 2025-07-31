#include <bits/stdc++.h>
using namespace std;
int isOrdinary(int n, int digitCtr){
  int msb = n/pow(10, digitCtr);
  for(int i=pow(10, digitCtr); i > 0; i/=10){
    int digit = n/i % 10;
    if(digit == msb) continue;
    if(digit < msb) return msb-1;
    if(digit > msb) return msb;
  }
  return msb;
}
int main(void){
  int t;
  cin >> t;
  while(t--){
    int n, digitCtr{-1} , ordinaryNumCtr{};
    cin >> n;
    for(int tmp{n}; tmp>0; tmp/=10){
      ++digitCtr;
    }
    ordinaryNumCtr = 9*digitCtr + isOrdinary(n, digitCtr);
    cout << ordinaryNumCtr << endl;
  }
  return 0;
}
