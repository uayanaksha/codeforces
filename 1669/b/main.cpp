#include <bits/stdc++.h>
#include <functional>
#include <queue>
#include <vector>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    int n, ai, ctr{1};
    priority_queue<int, vector<int>, less<int>> mem;
    bool unavailable = true;
    cin >> n;
    for(int i{}; i<n ;i++){
      cin >> ai;
      mem.emplace(ai);
    }
    int prev = mem.top(), curr;
    mem.pop();
    while (!mem.empty()){
      curr = mem.top();
      if(curr == prev){
        ++ctr;
      } else {
        ctr=1;
        prev = curr;
      }
      if(ctr >= 3){
        cout << mem.top() << endl;
        unavailable = false;
        break;
      }
      mem.pop();
    }
    if(unavailable){
      cout << -1 << endl;
    }
  }
  return 0;
}
