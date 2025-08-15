#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    int n, ai, sum{};
    deque<int> mem;
    cin >> n;
    while (n--) {
      cin >> ai;
      mem.push_back(ai);
    }
    sort(mem.begin(), mem.end());
    while (mem.size() > 1) {
      sum += (mem.back() - mem.front());
      mem.pop_back();
      mem.pop_front();
    }
    cout << sum << endl;
  }
  return 0;
}
