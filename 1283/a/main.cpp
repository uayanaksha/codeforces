#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    int h, m, ans{};
    cin >> h >> m;
    ans = (23 - h)*60 + (60 - m);
    cout << ans << endl;
  }
  return 0;
}
