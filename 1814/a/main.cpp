#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    long long n, k;
    cin >> n >> k;
    if(n%2==0){
      cout << "YES" << endl;
    } else {
      if(k%2==0){
        cout << "NO" << endl;
      } else {
        if(k == n || n >= k+2){
          cout << "YES" << endl;
        } else {
          cout << "NO" << endl;
        }
      }
    }
  }
  return 0;
}
