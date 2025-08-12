#include <bits/stdc++.h>
using namespace std;

int main(void){
  int t;
  cin >> t;
  while(t--){
    vector<string> board(9, " ");
    string s;
    for(int i=1; i<=8; i++){
      cin >> s;
      board[i] += s;
    }
    int prevPosCtr = 0;
    bool found = false;
    for(int row=1; row<=8; row++){
      int posCtr = 0;
      int r=-1, c=-1;
      for(int col=1; col<=8; col++){
        if(board[row][col] != '#') continue;
        posCtr++;
        r=row;
        c=col;
      }
      if(posCtr<1) continue;
      if(posCtr == 2){
        prevPosCtr = 2;
        continue;
      }
      if(prevPosCtr == 2){
        cout << r << " " << c << endl;
        break;
      }
      if(found) break;
    }
  }
  return 0;
}
