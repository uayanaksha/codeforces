#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    int x, y;
    cin >> x >> y;
    if(x == 0 && y == 0){
      cout << 0 << endl;
      continue;
    }
    int minScreens = y > 0 ? (y+1)/2 : 1;
    int excessSpace = (minScreens*5*3) - (y*2*2);
    if(excessSpace < x){
      x -= excessSpace;
      minScreens += (x/15)+1;
      if(x%15==0){
        minScreens--;
      }
    }
    cout << minScreens << endl;
  }
  return 0;
}
