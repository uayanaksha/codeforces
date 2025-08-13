#include <bits/stdc++.h>
using namespace std;
int main(void){
  string s;
  cin >> s;
  int totalQ{}, prevQ{}, nextQ{}, permutations{};
  for(char c: s){
    if(c != 'Q') continue;
    ++totalQ;
  }
  nextQ = totalQ;
  for(char c: s){
    if(c == 'Q'){
      ++prevQ;
      --nextQ;
    }
    if(c == 'A'){
      permutations += prevQ*nextQ;
    }
  }
  cout << permutations << endl;
  return 0;
}
