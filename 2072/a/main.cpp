#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    int n, k, p, moves{};
    cin >> n >> k >> p;
    k = abs(k);
    moves = k/p;
    if(k%p > 0) {
      moves++;
    }
    bool signal = moves <= n;
    cout << (signal ? moves : -1) << endl;
  }
  return 0;
}
