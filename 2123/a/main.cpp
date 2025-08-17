#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    bool signal = n%4 == 0;
    cout << (!signal ? "Alice" : "Bob") << endl;
  }
  return 0;
}
