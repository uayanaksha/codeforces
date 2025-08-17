#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    int n, a, b, c, minDays{}, total{};
    cin >> n >> a >> b >> c;
    int s = a+b+c;
    minDays = (n/s)*3;
    total = (minDays/3)*s;
    if(total < n){
      total += a;
      ++minDays;
    }
    if(total < n){
      total += b;
      ++minDays;
    }
    if(total < n){
      total += c;
      ++minDays;
    }
    cout << minDays << endl;
  }
  return 0;
}
