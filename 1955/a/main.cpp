#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    int n, a, b, cost{};
    cin >> n >> a >> b;
    if(b > 2*a){
      cost = n*a;
    } else {
      cost = (n/2*b) + (n%2*a);
    }
    cout << cost << endl;
  }
  return 0;
}
