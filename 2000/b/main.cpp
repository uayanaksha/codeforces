#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    int n, ai, start, end;
    bool followed = true;
    cin >> n >> ai;
    start = ai;
    end = ai;
    for(int i{1}; i<n; i++){
      cin >> ai;
      if(ai < start){
        if(start - ai > 1){
          followed = false;
        } else {
          start = ai;
        }
      } else if ( ai > end ){
        if(ai - end > 1){
          followed = false;
        } else {
          end = ai;
        }
      }
    }
    cout << (followed ? "YES" : "NO") << endl;
  }
  return 0;
}
