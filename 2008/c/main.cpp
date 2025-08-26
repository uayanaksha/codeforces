#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    int l, r, diff{};
    cin >> l >> r;
    diff = r - l;
    if(diff == 0){
      cout << 1 << endl;
      continue;
    }
    int exp = pow(2.00*diff, 0.5);
    exp = exp < 2 ? 2 : exp;
    while(2*diff >= exp*(exp+1)){
      ++exp;
    }
    cout << exp << endl;
  }
  return 0;
}
