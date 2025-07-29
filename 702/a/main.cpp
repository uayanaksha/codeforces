#include <bits/stdc++.h>
using namespace std;
int main(void){
  int n, ai, prev, ctr = 1, maxSize = 1;
  cin >> n >> prev;
  for(int i{1}; i < n; i++){
    cin >> ai;
    if(ai > prev){
      if(++ctr > maxSize){
        maxSize = ctr;
      }
    } else {
      ctr = 1;
    }
    prev = ai;
  }
  cout << maxSize << endl;
  return 0;
}
