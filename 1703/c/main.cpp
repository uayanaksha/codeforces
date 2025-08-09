#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    int n, ai, bi;
    vector<int>mem;
    cin >> n;
    for(int i{}; i<n; i++){
      cin >> ai;
      mem.push_back(ai);
    }
    for(int i{}; i<n; i++){
      cin >> bi;
      char c;
      int ctr=mem[i];
      while(bi--){
        cin >> c;
        if(c == 'U'){
          if(--ctr==-1){
            ctr = 9;
          }
        } else {
          if(++ctr==10){
            ctr = 0;
          }
        }
      }
      mem[i] = ctr;
    }
    for(int e: mem){
      cout << e << " ";
    } cout << endl;
  }
  return 0;
}
