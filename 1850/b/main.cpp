#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    int n, ai, bi, ptr = -1 ,maxBi = -1;
    cin >> n;
    for(int i{1}; i<=n;i++){
      cin >> ai >> bi;
      if (ai > 10) continue;
      if(maxBi < 0) { ptr = i; maxBi = bi; }
      if(bi > maxBi) { ptr = i; maxBi = bi; }
    }
    cout << ptr << endl;
  }
  return 0;
}
