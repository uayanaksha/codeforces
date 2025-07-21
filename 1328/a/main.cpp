#include <bits/stdc++.h>
using namespace std;
int main(void){
  int n, tmp, dividend, divisor;
  vector<int> mem;
  cin >> n;
  while(n--){
    cin >> dividend >> divisor;
    if ( dividend % divisor == 0){ tmp = 0; }
    else { tmp = divisor - (dividend % divisor); }
    mem.push_back(tmp);
  }
  for(auto e: mem){
    cout << e << endl;
  }
  return 0;
}
