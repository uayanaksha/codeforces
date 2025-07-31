#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    char c;
    int ptr{};
    vector<int> mem(3, 0);
    for(int i{}; i<9; i++){
      cin >> c;
      if(c == '?') continue;
      mem[c-'A']++;
    }
    for(int i{}; i<3; i++){
      if(mem[i] == 3) continue;
      cout << char('A' + i) << endl;
    }
  }
  return 0;
}
