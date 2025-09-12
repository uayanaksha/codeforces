#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while(t--){
    double n;
    cin >> n;
    int sq_ctr = sqrt(n);
    int cu_ctr = cbrt(n);
    int e6_ctr = cbrt(sq_ctr);
    int ctr = sq_ctr + cu_ctr - e6_ctr;
    cout << ctr << endl;
  }
  return 0;
}
