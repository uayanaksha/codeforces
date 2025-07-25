#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t, a, b, c;
  cin >> t;
  while(t--){
    cin >> a >> b >> c;
    cout << (a ^ b ^ c) << endl;
  }
  return 0;
}
