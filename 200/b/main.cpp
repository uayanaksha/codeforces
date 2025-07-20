#include <bits/stdc++.h>
using namespace std;
int main(void){
  long double n = 0, pi = 0, ans = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> pi;
    ans += pi;  
  }
  ans = ans / n;
  cout << ans << endl;
  return 0;
}
