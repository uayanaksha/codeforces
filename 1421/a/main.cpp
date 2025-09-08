#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while(t--){
    int a, b, x, sum;
    cin >> a >> b;
    x = a | b;
    sum = (a^x) + (b^x);
    cout << sum << endl;
  }
  return 0;
}
