#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while(t--){
    int a, b, c;
    cin >> a >> b >> c;
    bool signal = b == 0 || b % 3 == 0 || c + (b%3) >= 3;
    if(!signal){
      cout << -1 << endl;
    } else {
      int ctr = a + (b+c+2)/3;
      cout << ctr << endl;
    }
  }
  return 0;
}
