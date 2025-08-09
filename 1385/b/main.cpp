#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    int n, ai;
    cin >> n;
    vector<bool> mem(51, false);
    for(int i{}; i<2*n; i++){
      cin >> ai;
      if(mem[ai]) continue;
      mem[ai] = true;
      cout << ai << " ";
    } cout << endl;
  }
  return 0;
}
