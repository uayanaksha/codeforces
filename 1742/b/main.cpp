#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    int n, ai;
    set<int> s;
    cin >> n;
    for(int i{}; i < n; i++){
      cin >> ai;
      s.insert(ai);
    }
    if(s.size() == n){
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}
