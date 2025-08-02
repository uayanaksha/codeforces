#include <bits/stdc++.h>
using namespace std;
static bool isblocked(char c){ return c == '#'; }
int main(void){
  int t;
  cin >> t;
  while(t--){
    int n, moves{}, emptyCtr{}, maxSpace{};
    char c;
    vector<int> mem_empty;
    cin >> n;
    for(int i{}; i<n; i++){
      cin >> c;
      if(isblocked(c)){
        mem_empty.push_back(emptyCtr);
        emptyCtr = 0;
      } else {
        if(++emptyCtr > maxSpace){
          maxSpace = emptyCtr;
        }
      }
    }
    mem_empty.push_back(emptyCtr);
    for(int e: mem_empty){
      if(e < 3){
        moves += e;
      } else {
        moves = 2;
        break;
      }
    }
    cout << moves << endl;
  }
  return 0;
}
