#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    int n, ai, m{}, b{};
    cin >> n;
    for(int i{}; i<n; i++){
      cin >> ai;
      if(ai%2 == 0){
        m += ai;
      } else {
        b += ai;
      }
    }
    if(m>b){
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}
