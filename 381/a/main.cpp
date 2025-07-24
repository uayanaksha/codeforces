#include <bits/stdc++.h>
using namespace std;
int main(void){
  int n, ni, s{}, d{}, tmp;
  deque<int> mem;
  cin >> n;
  for(int i{}; i < n; i++) {
    cin >> ni; 
    mem.push_back(ni);
  }
  while (!mem.empty()) {
    if(mem.front() > mem.back()){
      s += mem.front();
      mem.pop_front();
    } else {
      s += mem.back();
      mem.pop_back();
    }
    if(mem.empty()) break;
    if(mem.front() > mem.back()){
      d += mem.front();
      mem.pop_front();
    } else {
      d += mem.back();
      mem.pop_back();
    }
  }
  cout << s << " " << d << endl;
  return 0;
}
