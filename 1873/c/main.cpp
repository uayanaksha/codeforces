#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  const int scoreboard[5][5] = {
    { 5, 4, 3, 2, 1},
    { 4, 4, 3, 2, 1},
    { 3, 3, 3, 2, 1},
    { 2, 2, 2, 2, 1},
    { 1, 1, 1, 1, 1},
  };
  while(t--){
    int score{};
    char c;
    for(int i=1; i <= 10; i++){
      for(int j=1; j <= 10; j++){
        cin >> c;
        if(c != 'X') continue;
        if(i < 6){
          if(j < 6){
            score += scoreboard[5-i][5-j];
          } else {
            score += scoreboard[5-i][j-6];
          }
        } else {
          if(j < 6){
            score += scoreboard[i-6][5-j];
          } else {
            score += scoreboard[i-6][j-6];
          }
        }
      }
    }
    cout << score << endl;
  }
  return 0;
}
