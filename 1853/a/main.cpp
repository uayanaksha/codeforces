#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    int n, ai, prev, mindiff = INT_MAX, moves{};
    bool issorted = true;
    cin >> n >> prev;
    for(int i{1}; i<n;i++){
      cin >> ai;
      if(ai < prev){
        issorted = false;
      } else {
        if(ai - prev < mindiff){
          mindiff = (ai - prev);
        }
      }
      prev = ai;
    }
    if(!issorted){
      cout << 0 << endl;
    } else {
      if(mindiff%2){
        moves = (mindiff + 1) / 2;
      } else {
        moves = mindiff/ 2 + 1;
      }
      cout << moves << endl;
    }
  }
  return 0;
}
