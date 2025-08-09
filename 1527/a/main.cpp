#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    int n, ctr{};
    cin >> n;
    while(n!= 1){
      n >>= 1;
      ctr++;
    }
    cout << (1<<ctr)-1 << endl;
  }
  return 0;
}
