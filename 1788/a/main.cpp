#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    int n, ai;
    vector<int> mem;
    cin >> n;
    for(int i{1}; i<=n; i++){
      cin >> ai;
      if(ai == 2){
        mem.push_back(i);
      }
    }
    if(mem.size() == 0){
      cout << 1 << endl;
    } else if(mem.size() % 2 == 0){
      cout << mem[(mem.size()-1)/2] << endl;
    } else {
      cout << -1 << endl;
    }
  }
  return 0;
}
