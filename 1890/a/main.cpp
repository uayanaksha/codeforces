#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    int n, ai;
    cin >> n;
    vector<int> v;
    set<int> s;
    map<int, int> m{};
    for(int i{}; i<n; i++){
      cin >> ai;
      if(!s.count(ai)){
        v.push_back(ai);
      }
      s.insert(ai);
      m[ai]++;
    }
    if(s.size() == 1){
      cout << "YES" << endl;
    } else if(s.size() > 2){
      cout << "NO" << endl;
    } else {
      int diff = abs(m[v.front()] - m[v.back()]);
      if(diff <= 1){
        cout << "YES" << endl;
      } else{
        cout << "NO" << endl;
      }
    }
  }
  return 0;
}
