#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    int n, ai, maxPtr{}, minPtr{}, maxim{INT_MIN}, minim{INT_MAX};
    cin >> n;
    for(int i{1}; i<=n ; i++){
      cin >> ai;
      if(ai > maxim){
        maxim = ai;
        maxPtr = i;
      }
      if(ai < minim){
        minim = ai;
        minPtr = i;
      }
    }
    int lmove = max(minPtr, maxPtr);
    int rmove = n - min(minPtr, maxPtr) + 1;
    int minMove = min(lmove, rmove);
    int dualMove = INT_MAX;
    if(maxPtr > n/2+1 && minPtr < n/2+1){
      dualMove = n - maxPtr + 1 + minPtr;
    } else if(maxPtr < n/2+1 && minPtr > n/2+1){
      dualMove = n - minPtr + 1 + maxPtr;
    }
    minMove = min(minMove, dualMove);
    cout << minMove << endl;
  }
  return 0;
}
