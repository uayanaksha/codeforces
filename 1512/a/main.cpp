#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    int n, d;
    cin >> n;
    vector<pair<int, int>> mem(101, pair(0, 0));
    for(int i = 1; i <= n ; i++){
      cin >> d;
      mem[d].first = i;
      mem[d].second += 1;
    }
    for(int i = 1; i <= 100 ; i++){
      if(mem[i].second == 1){
        cout << mem[i].first << endl;
      }
    }
  }
  return 0;
}
