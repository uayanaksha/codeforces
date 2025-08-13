#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    int n, ai, hasDuplicate{};
    set<int> s;
    cin >> n;
    for(int i{}; i<n; i++){
      cin >> ai;
      if(!s.contains(ai)){
        s.emplace(ai);
      } else {
        hasDuplicate++;
      }
    }
    cout << s.size() - (hasDuplicate%2) << endl;
  }
  return 0;
}
