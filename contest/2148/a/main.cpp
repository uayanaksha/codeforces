#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while(t--){
    int n, x;
    cin >> x >> n;
    if(n%2 == 0){
      cout << 0 << endl;
    } else {
      cout << x << endl;
    }
  }
  return 0;
}
