#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    int n, ai, sum{};
    cin >> n;
    for(int i{}; i<n; i++){
      cin >> ai;
      sum += ai;
    }
    if(sum == n){
      cout << 0 << endl;
    } else if (sum < n) {
      cout << 1 << endl;
    } else {
      cout << sum - n << endl;
    }
  }
  return 0;
}
