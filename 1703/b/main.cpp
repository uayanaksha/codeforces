#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    int n, balloonCtr{}; 
    string s;
    cin >>n >>s;
    vector<bool> mem(26, false);
    for(auto e: s){
      if(!mem[e - 'A']){
        mem[e-'A'] = true;
        ++balloonCtr;
      }
      ++balloonCtr;
    }
    cout << balloonCtr << endl;
  }
  return 0;
}
