#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    int a, b, c, diff;
    cin >> a >> b >> c;
    if(a > b){ swap(a, b); }
    diff = b-a;
    if(2*diff < b){
      cout << -1 << endl;
      continue;
    }
    if(c <= diff){
      if(c+diff != a && c+diff != b){
        cout << c+diff << endl;
      } else {
        cout << -1 << endl;
      }
    } else if(c <= 2*diff){
      if(c-diff != a && c-diff != b){
        cout << c-diff << endl;
      } else {
        cout << -1 << endl;
      }
    } else {
      cout << -1 << endl;
    }
  }
  return 0;
}
