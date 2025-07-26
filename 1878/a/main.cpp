#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    int n{}, k{}, ai{};
    bool exists = false;
    cin >> n >> k;
    for(int i{}; i < n; i++){
      cin >> ai;
      if(ai == k){
        exists = true;
      }
    }
    if(exists){
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}
