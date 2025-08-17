#include <bits/stdc++.h>
using namespace std;
int main(void){
  int t;
  cin >> t;
  while(t--){
    int n, a[3], minDays{};
    cin >> n >> a[1] >> a[2] >> a[0];
    int s = a[0]+a[1]+a[2];
    if(n>s){
      int totalDistance = n/s;
      minDays = totalDistance*3;
      totalDistance *= s;
      while(totalDistance < n){
        totalDistance += a[++minDays%3];
      }
    } else {
      int total{};
      while(total < n){
        total += a[++minDays%3];
      }
    }
    cout << minDays << endl;
  }
  return 0;
}
