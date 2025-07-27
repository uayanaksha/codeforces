#include <bits/stdc++.h>
using namespace std;
int main(void){
  int n, blocks{}, ctr{}, block{}; 
  cin >> n;
  for(int i=1; blocks < n; i++){
    block = (i+1)*i/2;
    if(blocks + block <= n){
      blocks += block;
      ++ctr;
    } else {
      break;
    }
  }
  cout << ctr << endl;
  return 0;
}
