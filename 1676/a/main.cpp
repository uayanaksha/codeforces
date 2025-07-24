#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t, n;
  cin >> t;
  while(t--){
    cin >> n;
    int d1 = n % 10,
        d2 = n / 10 % 10,
        d3 = n / 100 % 10,
        d4 = n / 1000 % 10,
        d5 = n / 10000 % 10,
        d6 = n / 100000 % 10;
    if (d6 + d5 + d4 == d3 + d2 + d1){
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}
