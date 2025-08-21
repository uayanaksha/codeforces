#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    int n, m;
    string a, b, c, s;
    cin >> n >> a >> m >> b >> c;
    s = a;
    for(int i{}; i<m; i++){
      if(c[i] == 'D'){
        s += b[i];
      } else {
       s = b[i] + s; 
      }
    }
    cout << s << endl;
  }
  return 0;
}
