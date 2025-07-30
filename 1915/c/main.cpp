#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    int n;
    long long ai, sum{};
    bool isSquare = false;
    cin >> n;
    for(int i{}; i<n; i++){
      cin >> ai;
      sum += ai;
    }
    long long sqrt = pow(sum, 0.5);
    if(sqrt * sqrt == sum){
      isSquare = true;
    }
    cout << (isSquare ? "YES" : "NO") << endl;
  }
  return 0;
}
