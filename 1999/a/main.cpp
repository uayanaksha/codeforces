#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t, n;
  cin >> t;
  while(t--){
    cin >> n;
    cout << (n % 10) + (n/10 % 10) << endl;
  }
  return 0;
}
