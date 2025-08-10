#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    bool signal = n > 2 && n%4 == 0;
    cout << (signal ? "YES" : "NO") << endl;
  }
  return 0;
}
