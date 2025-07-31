#include <bits/stdc++.h>
using namespace std;
int helper(int a, int b, int c, int n){
  if(n == 0) return a*b*c;
  int i1 = helper(a+1, b, c, n-1);
  int i2 = helper(a, b+1, c, n-1);
  int i3 = helper(a, b, c+1, n-1);
  int maxim = max(max(i1, i2), i3);
  return maxim;
}
int main(void){
  int t;
  cin >> t;
  while(t--){
    int a, b, c;
    cin >> a >> b >> c;
    cout << helper(a, b, c, 5) << endl;
  }
  return 0;
}
