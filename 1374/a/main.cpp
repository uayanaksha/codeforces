#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    int x, y, n, k{};
    cin >> x >> y >> n;
    k = n - (n%x) + y;
    if (k > n){
      k -= x;
    }
    cout << k << endl;
  }
  return 0;
}
