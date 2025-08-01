#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    int n, ai, oddCtr{}, evenCtr{}, sum{};
    vector<int> a;
    cin >> n;
    for(int i{}; i<n; i++){
      cin >> ai;
      if(ai%2){ ++oddCtr; }
      a.push_back(ai);
      sum += ai;
    }
    evenCtr = n-oddCtr;
    if(sum % 2){
      cout << "YES" << endl;
    } else {
      if(oddCtr == 0 || evenCtr == 0){
        cout << "NO" << endl;
      } else {
        cout << "YES" << endl;
      }
    }
  }
  return 0;
}
