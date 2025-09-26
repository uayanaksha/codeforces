#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    while(n--){
      char c;
      cin >> c;
      if(c == 'U'){
        cout << 'D';
        continue;
      }
      if(c == 'D'){
        cout << 'U';
        continue;
      }
      cout << c;
    } cout << endl;
  }
  return 0;
}
