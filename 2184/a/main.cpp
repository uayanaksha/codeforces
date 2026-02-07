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
    if(n < 4) {
      cout << n << endl;
      continue;
    }
    cout << n % 2 << endl;
  }
  return 0;
}
