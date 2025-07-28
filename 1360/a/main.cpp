#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    int a, b;
    cin >> a >> b;
    int Tarea = 2*a*b, maxSide =  max(a, b), minSide =  min(a, b);
    int side{};
    if(minSide*2 >= maxSide){
      side = 2*minSide;
    } else {
      side = maxSide;
    }
    while(side * side < Tarea){
      side++;
    }
    cout << side*side << endl;
  }
  return 0;
}
