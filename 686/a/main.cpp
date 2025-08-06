#include <bits/stdc++.h>
using namespace std;
int main(void){
  long long t, x, ctr{};
  cin >> t >> x;
  while(t--){
    char c;
    long long di;
    cin >> c >> di;
    if(c == '+'){
      x += di;
    } else {
      if(di > x){
        ctr++;
      } else {
        x -= di;
      }
    }
  }
  cout << x << " " << ctr << endl;
  return 0;
}
