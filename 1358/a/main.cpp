#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    int n, m, count{};
    cin >> n >> m;
    if(n == 1 && m == 1){
      count = 1;
    } else if(n%2==0 || m%2==0){
      count = m*n/2;
    } else {
      int maxim = max(m, n);
      int minim = min(m, n);
      count = (minim*--maxim)/2+(minim+1)/2;
    }
    cout << count << endl;
  }
  return 0;
}
