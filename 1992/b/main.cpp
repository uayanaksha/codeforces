#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    int n, k, ai, moves{}, maxPiece=0;
    cin >> n >> k;
    for(int i{}; i<k; i++){
      cin >> ai;
      moves += (2*ai - 1);
      if(ai > maxPiece){
        maxPiece = ai;
      }
    }
    moves -= (2*maxPiece - 1);
    cout << moves << endl;
  }
  return 0;
}
