#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    int n, m, maxCtr = INT_MIN;
    bool notfound = true;
    string x, s;
    map<char, int> mem;
    cin >> n >> m >> x >> s;
    for(auto e: s){
      mem[e]++;
      if(mem[e] > maxCtr){
        maxCtr = mem[e];
      }
    }
    for(int i{}; i<=maxCtr; i++){
      if(x.contains(s)){
        cout << i << endl;
        notfound = false;
        break;
      }
      x+=x;
    }
    if(notfound){
      cout << -1 << endl;
    }
  }
  return 0;
}
