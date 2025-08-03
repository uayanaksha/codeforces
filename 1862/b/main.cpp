#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    int n, prev, ai;
    vector<int> mem;
    cin >> n >> prev;
    mem.push_back(prev);
    for(int i{1}; i<n; i++){
      cin >> ai;
      if(ai < prev){
        mem.push_back(ai);
      }
      mem.push_back(ai);
      prev = ai;
    }
    cout << mem.size() << endl;
    for(auto e: mem){
      cout << e << " ";
    } cout << endl;
  }
  return 0;
}
