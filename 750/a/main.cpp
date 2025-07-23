#include <bits/stdc++.h>
using namespace std;
int main(void){
  int n, k;
  cin >> n >> k;
  k = 240 - k;
  while(n){
    int t = 5*n*(n+1)/2;
    if(t <= k) break;
    n--;
  }
  cout << n << endl;
  return 0;
}
