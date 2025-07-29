#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    int n, x, ai, max = INT_MIN;
    vector<int> mem(1, 0);
    cin >> n >> x;
    for(int i{}; i<n; i++){
      cin >> ai;
      mem.push_back(ai);
      if(abs(ai - mem[i]) > max){
        max = abs(ai - mem[i]);
      }
    }
    int lastDist = 2*(x - mem.back());
    if(lastDist > max){
      cout << lastDist << endl;
    } else {
      cout << max << endl;
    }
  }
  return 0;
}
