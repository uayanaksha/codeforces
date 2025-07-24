#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t, a, b;
  cin >> t;
  while (t--){
    cin >> a >> b;
    int diff = abs(b - a);
    int steps = diff / 10;
    if(diff % 10) ++steps;
    cout << steps << endl;
  }
  return 0;
}
