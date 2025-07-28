#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    int n, eq{}, ctr1{}, ctr2{};
    cin >> n;
    eq = n/3;
    if((eq*3) + 2 == n){
      ctr1 = eq;
      ctr2 = eq+1;
    } else if((eq*3)+1 == n){
      ctr1 = eq+1;
      ctr2 = eq;
    } else {
      ctr1 = eq;
      ctr2 = eq;
    }
    cout << ctr1 << " " << ctr2 << endl;
  }
  return 0;
}
