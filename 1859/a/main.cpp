#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    vector<int> a, b, c;
    int n, ai, maxim=INT_MIN;
    cin >> n;
    for(int i{}; i<n; i++){
      cin >> ai;
      a.push_back(ai);
      if(ai > maxim){
        maxim = ai;
      }
    }
    for(int ai: a){
      if(ai == maxim){
        c.push_back(ai);
      } else {
        b.push_back(ai);
      }
    }
    if(b.empty() || c.empty()){
      cout << -1 << endl;
    } else {
      cout << b.size() << " " << c.size() << endl;
      for(int bi: b){
        cout << bi << " ";
      } cout << endl;
      for(int ci: c){
        cout << ci << " ";
      } cout << endl;
    }
  }
  return 0;
}
