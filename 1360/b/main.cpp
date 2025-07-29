#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    int n, ai, minDiff = INT_MAX;
    vector<int> mem;
    cin >> n;
    for(int i{}; i < n; i++){
      cin >> ai;
      mem.push_back(ai);
    }
    sort(mem.begin(), mem.end());
    for(int i{}; i < n-1; i++){
      if(abs(mem[i] - mem[i+1]) < minDiff){
        minDiff = abs(mem[i] - mem[i+1]);
      }
    }
    cout << minDiff << endl;
  }
  return 0;
}
