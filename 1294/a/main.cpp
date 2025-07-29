#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    int a, b, c, n, max{INT_MIN};
    cin >> a >> b >> c >> n;
    if(a > max) max = a;
    if(b > max) max = b;
    if(c > max) max = c;
    int eval = n-(max*3 - (a+b+c));
    if(eval < 0){
      cout << "NO" << endl;
    } else if (eval  % 3 == 0){
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}
