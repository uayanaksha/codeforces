#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    int fibonacciness{}, fibonacciness2{};
    vector<int> a(5, 0);
    for(int i{}; i<5; i++){
      if(i==2) continue;
      cin >> a[i];
    }
    a[2] = a[0] + a[1];
    for(int i{0}; i<3; i++){
      if(a[i+2] == a[i] + a[i+1]) {
        fibonacciness++;
      }
    }
    a[2] = a[3] - a[1];
    for(int i{0}; i<3; i++){
      if(a[i+2] == a[i] + a[i+1]) {
        fibonacciness2++;
      }
    }
    fibonacciness = max(fibonacciness, fibonacciness2);
    cout << fibonacciness << endl;
  }
  return 0;
}
