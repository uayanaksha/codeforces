#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    long long n, a{}, b{};
    cin >> n;
    a = 1 << n;
    for(int i=1; i<n/2; i++){
      a += 1<<i;
    }
    for(int i=n/2; i<n; i++){
      b += 1<<i;
    }
    cout << abs(a-b) << endl;
  }
  return 0;
}
