#include <bits/stdc++.h>
using namespace std;
int main(void){
  int x[4], maxPtr;
  maxPtr = 0;
  for (int i{}; i < 4; i++) {
    cin >> x[i];
    if(x[i] > x[maxPtr]) {
      maxPtr = i;
    }
  }
  for (int i{}; i < 4; i++) {
    if( i == maxPtr) continue;
    cout << x[maxPtr] - x[i] << " ";
  } cout << endl;
  return 0;
}
