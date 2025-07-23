#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t, a, b, c;
  cin >> t;
  while(t--){
    cin >> a >> b >> c;
    if (abs(a - b) == c || (a+b) == c){
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}
