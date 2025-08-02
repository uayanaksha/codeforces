#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    int n, k, ai, ctr{}, robinGold{};
    cin >> n >> k;
    while(n--){
      cin >> ai;
      if(ai >= k){
        robinGold += ai;
        continue;
      }
      if(ai == 0 && robinGold > 0){
        --robinGold;
        ++ctr;
      }
    }
    cout << ctr << endl;
  }
  return 0;
}
