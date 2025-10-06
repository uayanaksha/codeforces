#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while(t--){
    int n, R;
    cin >> n;
    R = n%3;
    switch (R) {
      case 0: cout << R << endl; break;
      default: cout << 3 - R << endl; break;
    }
  }
  return 0;
}
