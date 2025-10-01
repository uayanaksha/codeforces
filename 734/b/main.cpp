#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int k2, k3, k5, k6;
  cin >> k2 >> k3 >> k5 >> k6;
  int ctr256 = min(k2, min(k5, k6));
  k2 -= ctr256;
  int ctr32 = min(k3, k2);
  int sum = 32*ctr32 + 256*ctr256;
  cout << sum << endl;
  return 0;
}
