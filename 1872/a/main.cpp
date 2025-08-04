#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    int a, b, c, moves{};
    cin >> a >> b >> c;
    if (a == b){
      moves = 0;
    } else if (a+b <= c){
      moves = 1;
    } else {
      int diff = abs(a-b);
      moves = diff/c/2;
      if(diff > moves * c * 2){
        moves++;
      }
    }
    cout << moves << endl;
  }
  return 0;
}
