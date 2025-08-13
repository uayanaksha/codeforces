#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    long long n, sum{};
    cin >> n;
    while (n > 0){
      sum += n;
      n>>=1;
    }
    cout << sum << endl;
  }
  return 0;
}
