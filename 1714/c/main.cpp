#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while(t--){
    string s;
    int n;
    cin >> n;
    if(n < 10){
      cout << n << endl;
      continue;
    }
    int ctr = 9;
    for(int i=9; i>0; --i){
      if(i <= n){
        n -= i;
        s = char('0'+i) + s;
      }
    }
    cout << s << endl;
  }
  return 0;
}
