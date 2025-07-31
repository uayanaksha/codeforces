#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    int x, y, xi, yi, area{}, s{};
    cin >> x >> y;
    for(int i{1}; i<4; i++){
      cin >> xi >> yi;
      if(area > 0) continue;
      if(x == xi){
        s = (y - yi);
      }
      if (y == yi){
        s = x - xi;
      }
      area = s*s;
    }
    cout << area << endl;
  }
  return 0;
}
