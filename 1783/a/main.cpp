#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    int n, ai, maxCtr{};
    set<int> s;
    vector<int> v, mem(101, 0);
    cin >> n;
    for(int i{}; i<n; i++){
      cin >> ai;
      s.insert(ai);
      v.push_back(ai);
      if(++mem[ai] > maxCtr){
        maxCtr = mem[ai];
      }
    }
    if(s.size() == 1){
      cout << "NO" << endl;
      continue;
    } else {
      cout << "YES" << endl;
    }
    if(s.size() == v.size()){
      sort(v.begin(), v.end(), greater<int>());
    } else {
      v.erase(v.begin(), v.end());
      for(int i{}; i<maxCtr; i++){
        for(int j=100; j>=0; j--){
          if(mem[j] == 0) continue;
          v.push_back(j);
          --mem[j];
        }
      }
    }
    for(int e:v){
      cout << e << " ";
    } cout << endl;
  }
  return 0;
}
