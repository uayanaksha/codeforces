#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t, a, b, c, d;
  cin >> t;
  while(t--){
    cin >> a >> b >> c >> d;
    int ctr {};
    if (a < b) ++ctr;
    if (a < c) ++ctr;
    if (a < d) ++ctr;
    cout << ctr << endl;
  }
  return 0;
}
