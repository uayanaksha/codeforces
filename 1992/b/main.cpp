#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    int n, k, ai, moves{};
    vector<int> mem;
    cin >> n >> k;
    for(int i{}; i<k; i++){
      cin >> ai;
      mem.push_back(ai);
    }
    sort(mem.begin(), mem.end());
    mem.pop_back();
    while(!mem.empty()){
      moves += (2*mem.back() - 1);
      mem.pop_back();
    }
    cout << moves << endl;
  }
  return 0;
}
