#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t, k;
  cin >> t;
  vector<int> mem(1001, 0);
  int n = 1;
  for(int i = 1; i <= 1000; i++){
    if(n % 3 == 0 || n % 10 == 3){
      i--;
    } else {
      mem[i] = n;
    }
    n++;
  }
  while(t--){
    cin >> k;
    cout << mem[k] << endl;
  }
  return 0;
}
