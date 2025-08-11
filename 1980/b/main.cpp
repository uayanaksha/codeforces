#include <bits/stdc++.h>
#include <functional>
using namespace std;
enum { YES, NO, MAYBE };
int main(void){
  int t;
  cin >> t;
  while(t--){
    int n, f, k, ai, favVal;
    cin >> n >> f >> k;
    deque<int> mem(1, INT_MIN);
    for(int i{1}; i<=n; i++){
      cin >> ai;
      mem.push_back(ai);
      if(i == f){
        favVal = ai;
      }
    }
    sort(mem.begin(), mem.end(), greater<int>());
    int last_popped;
    while(k--){
      last_popped = mem.front();
      mem.pop_front();
    }
    if(mem.size() < 2){
      cout << "YES" << endl;
    } else if(mem.front() == favVal){
      if(last_popped == favVal){
        cout << "MAYBE" << endl;
      } else {
        cout << "NO" << endl;
      }
    } else if(mem.front() < favVal){
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}
