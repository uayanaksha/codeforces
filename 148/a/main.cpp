#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main(void){
  int k,l,m,n,d,damaged = 0, i;
  cin >> k >> l >> m >> n >> d;
  vector<bool> mem(d+1, false);
  for(i = 1; k*i <= d; ++i){
    mem[k*i] = true; 
  }
  for(i = 1; l*i <= d; ++i){
    mem[l*i] = true; 
  }
  for(i = 1; m*i <= d; ++i){
    mem[m*i] = true; 
  }
  for(i = 1; n*i <= d; ++i){
    mem[n*i] = true; 
  }
  for(i = 1; i <= d; i++){ 
    if(mem[i]) {
      ++damaged; 
    }
  }
  cout << damaged << endl;
  return 0;
}
