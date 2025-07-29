#include <bits/stdc++.h>
using namespace std;
bool isSorted(vector<int> &mem){
  bool signal = true;
  for(int i{}; i < mem.size()-1; i++){
    if(mem[i] > mem[i+1]){
      signal = false;
    }
    if(!signal) break;
  }
  return signal;
}
int main(void){
  int t;
  cin >> t;
  while(t--){
    int n, k, ai;
    vector<int> mem;
    cin >> n >> k;
    for(int i{}; i < n; i++){
      cin >> ai;
      mem.push_back(ai);
    }
    if(isSorted(mem)){
      cout << "YES" << endl; 
    } else {
      if(k > 1){
        cout << "YES" << endl;
      } else {
        cout << "NO" << endl;
      }
    }
  }
  return 0;
}
