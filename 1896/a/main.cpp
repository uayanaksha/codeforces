#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    int n, ai, minim=INT_MAX, minPtr{};
    cin >> n;
    for(int i{}; i<n; i++){
      cin >> ai;
      if(ai < minim){
        minim = ai;
        minPtr = i;
      }
    }
    bool signal = minPtr == 0;
    cout << (signal ? "YES" : "NO") << endl;
  }
  return 0;
}
