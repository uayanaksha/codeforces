#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    int n, ai;
    cin >> n;
    set<int> s;
    for(int i{}; i<n; i++){
      cin >> ai;
      s.insert(ai);
    }
    cout << s.size() << endl;
  }
  return 0;
}
