#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t, n, ai;
  cin >> t;
  while(t--){
    cin >> n;
    deque<int> mem;
    bool isNO = false;
    for(int i{}; i < n; i++) {
      cin >> ai;
      mem.push_back(ai);
    }
    for(int i{}; i < n-1; i++){
      for(int j = i+1; j < n; j++){
        if(mem[i] == mem[j]){
          ai = mem[j];
          mem[j--] = mem[--n];
          mem[n] = ai;
          mem.pop_back();
        } else if(mem[i] > mem[j]){
          ai = mem[i];
          mem[i] = mem[j];
          mem[j] = ai;
        }
      }
    }
    while(mem.size() > 1){
      if(abs(mem[0] - mem[1]) <= 1){
        if(mem[0] > mem[1]) {
          swap(mem[0], mem[1]);
        }
        mem.pop_front();
      } else {
        isNO = true; 
        break;
      }
    }
    cout << ( isNO ? "NO" : "YES" ) << endl;
  }
}
