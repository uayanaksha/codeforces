#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    int n, ai, min = INT_MAX, sum{};
    cin >> n;
    for(int i{}; i < n; i++){
      cin >> ai;
      if(ai < min){
        min = ai;
      }
      sum += ai;
    }
    sum -= min*n;
    cout << sum << endl;
  }
  return 0;
}
