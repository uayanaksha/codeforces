#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    int n, prev, curr;
    bool isPerfect = true;
    cin >> n >> prev;
    for(int i{1}; i<n; i++){
      cin >> curr;
      if(abs(prev - curr) != 5 && abs(prev-curr) != 7) {
        isPerfect = false;
      }
      prev = curr;
    }
    cout << (isPerfect ? "YES" : "NO" ) << endl;
  }
  return 0;
}
