#include <bits/stdc++.h>
using namespace std;
int main(void){
    int n, moves{};
    string a, b;
    cin >> n >> a >> b;
    for(int i{}; i<n; ++i){
      int diff = abs(a[i] - b[i]);
      if(diff > 5){
        diff = 10 - diff;
      }
      moves += diff;
    }
    cout << moves << endl;
  return 0;
}
