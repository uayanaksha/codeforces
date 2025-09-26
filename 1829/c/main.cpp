#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while(t--){
    int n, min_10 = 0, min_01 = 0, min_11 = 0;
    cin >> n;
    pair<int, int> i{0, 0};
    while(n--){
      cin >> i.first >> i.second;
      switch(i.second){
        case 01: {
                   if(min_01 < 1 || i.first < min_01){
                     min_01 = i.first;
                   }
                   break;
                 }
        case 10: {
                   if(min_10 < 1 || i.first < min_10){
                     min_10 = i.first;
                   }
                   break;
                 }
        case 11: {
                   if(min_11 < 1 || i.first < min_11){
                     min_11 = i.first;
                   }
                   break;
                 }
      }
    }
    int ans = -1;
    if(min_11>0) {
      ans = min_11;
    }
    if(min_01>0 && min_10>0){
      if(ans > 0){
        ans = min(ans, min_01 + min_10);
      } else {
        ans = min_01 + min_10;
      }
    }
    cout << ans << endl;
  }
  return 0;
}
