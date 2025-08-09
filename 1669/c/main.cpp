#include <bits/stdc++.h>
using namespace std;
bool helper(vector<int>& mem, int start){
  size_t n = mem.size();
  if(n < 3) return true;
  bool parity = true;
  for(int i{start}; i<n-2; i+=2){
    if(mem[i] % 2 != mem[i+2]%2){
      parity = false;
      break;
    }
  }
  return parity;
}
int main(void){
  int t;
  cin >> t;
  while(t--){
    int n, ai;
    vector<int> mem;
    cin >> n;
    for(int i{}; i<n; i++){
      cin >> ai;
      mem.push_back(ai);
    }
    bool signal = helper(mem, 0) && helper(mem, 1);
    cout << (signal ? "YES" : "NO") << endl;
  }
  return 0;
}
