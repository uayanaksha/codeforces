#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    int n, d, ai;
    deque<int> mem;
    bool signal = false;
    cin >> n >> d;
    for(int i{}; i<n; i++){
      cin >> ai;
      if(ai > d) continue;
      mem.push_back(ai);
    }
    if(mem.size() == n){
      cout << "YES" << endl;
      continue;
    } else if(mem.size() < 2){
      cout << "NO" << endl;
      continue;
    }
    sort(mem.begin(), mem.end());
    int sum = mem.front();
    mem.pop_front();
    sum += mem.front();
    signal = sum <= d;
    cout << ( signal ? "YES" : "NO" ) << endl;
  }
  return 0;
}
