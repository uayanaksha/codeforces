#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    int n, ai, sum{};
    cin >> n;
    while(n--){
      cin >> ai;
      sum += abs(ai);
    }
    cout << sum << endl;
  }
  return 0;
}
