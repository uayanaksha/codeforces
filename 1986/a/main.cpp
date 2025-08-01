#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    array<int, 3> x;
    cin >> x[0] >> x[1] >> x[2];
    sort(x.begin(), x.end());
    cout << x[2] - x[0] << endl;
  }
  return 0;
}
