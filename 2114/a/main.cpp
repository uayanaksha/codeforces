#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    int n, i;
    cin >> n;
    for(i=1; i*i<=n; ++i){}
    i--;
    if(i*i==n){
      cout << 0 << " " << i << endl;
    } else {
      cout << -1 << endl;
    }
  }
  return 0;
}
