#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    int ai, bi, s;
    cin >> ai >> bi;
    if(ai == 0){
      s = 1;
    } else {
      s = ai + 2*bi + 1;
    }
    cout << s << endl;
  }
  return 0;
}
